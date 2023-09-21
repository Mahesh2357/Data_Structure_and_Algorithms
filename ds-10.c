#include <stdio.h>
//todo:  Insertion Operation in Array in Data Structures in C
void www(){
    printf("The array : \n");
}
//todo: transversal Operation in Array.
void display(int arr2[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("%d\t ", arr2[i]);
    }
    printf("\n");
}
//todo:  insertion operation in Array.
void sss(){
    printf("The array after the insertion the element : \n");
}
int index_insertion(int arr2[], int size,int element, int capacity, int index){
    if (size >= capacity)   
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr2[i+1] = arr2[i];
    }
    arr2[index] = element;
    return 1;
}
int main(){
    www();
    int arr2[50] = {2, 5, 12, 18, 39, 55};
    display(arr2, 4);
    display(arr2, 6);
    
    int size = 6, element = 7, index = 3;
    display(arr2, size);
    sss();
    index_insertion(arr2, size, element, 50, index);
    size +=1;
    display(arr2, size);
    return 0;
}
