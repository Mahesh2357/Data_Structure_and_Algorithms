#include <stdio.h>

void print_Arr(int *A, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
}

//todo: merge_Sort function
void merge_Sort(int A[], int mid, int low , int high){
    int i, j, k, B[50];
    i = low;
    j = mid + 1;
    k = low;

    while(i <= mid && j <= high){
        if(A[i]<A[j]){
            B[k] = A[i];
            i++; k++;
        }
        else{
            B[k] = A[j];
            j++; k++;
        }
    }

    while(i <= mid){
        B[k] = A[i];
        k++; i++;
    }
    while(j <=high){
        B[k] = A[j];
        j++; k++;
    }
    for(int i = low; i <= high; i++){
        A[i] = B[i];
    }
}

//todo: recursive_Merge_Sort function
void recursive_Merge_Sort(int A[], int low, int high){
    int mid;
    if(low < high){
        mid = (low + high)/2;
        recursive_Merge_Sort(A, low, mid);
        recursive_Merge_Sort(A, mid + 1, high);
        merge_Sort(A, mid, low, high);
    }
}

int main(){
    int A[] = {10, 2,54, 897, 13, 94, 45 , 15, 1};
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A)/sizeof(int);
    // int n = 6;

    printf("The Array before sorting is : \n");
    print_Arr(A, n);

    recursive_Merge_Sort(A, 0, n-1);

    printf("\nThe Array after sorting is : \n");
    print_Arr(A, n);
    return 0;
}