#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int maximum(int arr[], int size){
    int max = INT_MIN;
    for(int i = 0; i < size; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void Count_Sort(int *arr, int size){
    int i, j;
    //todo: find the maximum elements in the array.
    int max = maximum(arr, size);
    
    //todo: Create the Count array.
    int *count = (int *)malloc((size + 1) * sizeof(int));
    
    //todo: Initialize the elements to 0.
    for(int i = 0; i < max + 1; i++){
        count[i] = 0;
    }
    
    //* Increment the corresponding index in the array.
    for(int i = 0; i < size; i++){
        count[arr[i]] += 1; 
    }
    
    i = 0;
    j = 0;

    while(i <= max){
        if(count[i] > 0){
            arr[j] = i;
            count[i]--;
            j++;
        }
        else{
            i++;
        }
    }
}

void display(int arr[], int size){
    for(int i = 0; i < size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
  int arr[] = {6, 5, 12, 10, 9, 1};
  int size = sizeof(arr) / sizeof(arr[0]);
  
  printf("Original array\n");
  display(arr, size);
  
  Count_Sort(arr, size);

  printf("Sorted array\n");
  display(arr, size);
}