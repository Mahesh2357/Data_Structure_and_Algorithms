#include <stdio.h>
#include <stdlib.h>

void print_Arr(int *Arr, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", Arr[i]);
    }
    printf("\n");
}

int partition(int Arr[], int low, int high){
    int pivot = Arr[low];
    int i = low + 1;
    int j = high;
    int temp;    

    do{
        while(Arr[i] <= pivot){
            i++;
        }
        while(Arr[j] > pivot){
            j--;
        }
        if(i<j){
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }while(i<j);

    temp = Arr[low];
    Arr[low] = Arr[j];
    Arr[j] = temp;
    return j;
}

void quick_Sort(int Arr[], int low, int high) {
    //* index pivot after partition
    int partition_index;
    if(low < high){
        partition_index = partition(Arr, low, high);
        //todo: Sort left array
        quick_Sort(Arr, low, partition_index - 1);
        //todo: Sort right array.
        quick_Sort(Arr, partition_index + 1, high);
    }
}

int main(){
    int Arr[] = {101, 22, 3, 14, 25, 16, 87, 8, 69};
    int n = sizeof(Arr)/sizeof(int);
    
    //todo: Size in bits.
    printf("Arr size is %d\n", sizeof(Arr));
    printf("The Array before sorting is : \n");
    print_Arr(Arr, n);

    quick_Sort(Arr, 0, n - 1);

    printf("\nThe Array after sorting is : \n");
    print_Arr(Arr, n);
    return 0;
}