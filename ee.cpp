#include <stdio.h>
#include <conio.h>

//todo : Bubble_sort_Adaptive Function
//* i.e., Sorted array
void Bubble_sort_Adaptive(int A[], int n){
    int i, j, temp;
    int is_Sorted = 0;
    for(i = 1; i < n; i++){
        printf("Working on pass : %d\n", i);
        is_Sorted = 1;
        for(j = 0; j < n - i; j++){
            if( A[j] > A[j+1]){
                swap(A[j], A[j+1]);
                is_Sorted = 0;
            }
        }
        if(is_Sorted){
            return; 
        }
    }
}

void swap(int i, int j){
      int temp = A[j];
      A[j] = A[j+1];
      A[j+1] = temp;
}

void print_Arr(int* A, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

int main(){
    // int A[] = {10, 2, 13, 94, 45 , 15, 1};
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A)/sizeof(int);

    //todo: Printing array before sorting
    printf("The Array before sorting is : \n");
    print_Arr(A, n);

    // todo: Bubble_sort Function
    Bubble_sort_Adaptive(A, n);

    //todo: Printing array after sorting
    printf("\nThe Array after sorting is : \n");
    print_Arr(A, n);
    return 0;
}