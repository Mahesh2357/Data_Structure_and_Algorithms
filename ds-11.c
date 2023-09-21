#include <stdio.h>
//todo:  deletion Operation in Array in Data Structures in C

void www(){
    printf("The array : \n");
}

void display(int arr[], int n){
    for(int i=0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sss(){
    printf("The array after the deletion the element : \n");
}

//todo: deletion operation in Array.
void deletion(int arr[], int size, int index){
    for(int i=index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
}
int main(){
    www();
    int arr[50] = {2, 5, 676, 33, 74, 3};
    int size = 6,element = 444, index = 3;
    display(arr, size);

    sss();
    deletion(arr, size, index);
    size -=1;
    display(arr, size);
    return 0;
}