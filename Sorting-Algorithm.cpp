#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//todo: swap condition. 
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

//todo : selection_Sort condition.
void selection_Sort(int arr[], int size){
    int i, j, min_index;
    for(i = 0; i < size-1; i++){
        min_index = i;
        for(j = i+1; j < size; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[i], &arr[min_index]);
    }
}

//todo: display 
void print_array(int arr[], int size){
    int i;
    for(i = 0; i < size;i++) {
        cout << arr[i] << "  ";
    }
    cout << endl; 
}

int main(){
    int arr[] = { 1, 55, 2, 90, 3, 45};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout <<"Array size: " << n << endl;
    selection_Sort(arr, n);

    cout << "Sorted array : " << endl;
    print_array(arr, n);
    return 0;
}