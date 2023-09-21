#include <stdio.h>
#include <conio.h>

void print_Arr(int *A, int n){
    for(int i = 0; i <n; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}

//todo:  Insertion_Sort
void Insertion_Sort(int *A, int n){
    int key, j;
    for(int i = 1; i <= n-1; i++){
        key = A[i];
        j = i-1;
        while(j>= 0 && A[j] > key){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = key;
    }
}

int main(){
    int A[] = {90, 21, 54, 46, 7, 86, 17};
    int n = sizeof(A)/sizeof(int);
    
     printf("The Array before sorting is : \n");
    print_Arr(A, n);

    Insertion_Sort(A, n);

    printf("\nThe Array after sorting is : \n");
    print_Arr(A, n);;

    return 0;
}
