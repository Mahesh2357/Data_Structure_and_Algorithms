#include <stdio.h>
#include <conio.h>

// todo: print_Arr
void print_Arr(int *A, int n){
    for(int i = 0; i < n; i++){
        printf("%d\t ", A[i]);
    }
    printf("\n");
}

// todo: selection_Sort function
void selection_Sort(int *A, int n){
    printf(" selection_Sort running...\n");
    int index_of_min, temp;
    for (int i = 0; i < n; i++){
        printf("Working on pass : %d\n", i+1);
        index_of_min = i;
        for (int j = i+1; j < n; j++){
            if (A[j] < A[index_of_min]){
                index_of_min = j;
            }
        }
        temp = A[i];
        A[i] = A[index_of_min];
        A[index_of_min] = temp;
    }
    
}

int main(){
    int A[] = {11,2,36,4,75,6,97,8,29, 67};
    int n = sizeof(A)/sizeof(int);
    
    print_Arr(A, n);
    printf("\n");
    
    selection_Sort(A, n);
    print_Arr(A, n);
    return 0;
}