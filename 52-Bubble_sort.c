#include <stdio.h>
#include <conio.h>

//todo: Bubble_sort Function
void Bubble_sort(int A[], int n){
    
    for(int i = 1; i < n; i++){
        printf("Working on pass : %d\n", i);
        for(int j = 0; j < n - i; j++){
            if( A[j] > A[j+1]){
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
}

//todo :Optional Bubble_sort Function
// void Bubble_sort(int A[], int n){
//     int i, j, temp;
//     for(i = 0; i < n-1; i++){
//         for(j = 0; j < n -1 - i; j++){
//             if( A[j] > A[j+1]){
//                  temp = A[j];
//                 A[j] = A[j+1];
//                 A[j+1] = temp;
//             }
//         }
//     }
// }

void print_Arr(int* A, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t", A[i]);
     }
    printf("\n");
}

int main(){
    int A[] = {10, 2, 13, 94, 45 , 15, 1};
    // int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(A)/sizeof(int);

    //todo: Printing array before sorting
    printf("The Array before sorting is : \n");
    print_Arr(A, n);

    // todo: Bubble_sort Function
    Bubble_sort(A, n);

    //todo: Printing array after sorting
    printf("\nThe Array after sorting is : \n");
    print_Arr(A, n);
    return 0;
}