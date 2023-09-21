#include <stdio.h>

int linear_search(int arr1[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int binary_search(int arr1[], int size, int element)
{
    int low, high, mid;
    low = 0; high = size;

    while (low <= high)     
    {
        mid = low + high / 2;
        if (arr1[mid] == element)
        {
            return mid; 
        }
        else if (arr1[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        } 
    }
    return -1;
}
int main()
{
    //todo: Unsorted array for linear search
    int arr1[] = {1, 245, 43, 4, 85, 76, 17, 38};
    int size = sizeof(arr1)/sizeof(int);
    int element = 85;
    int search_index = linear_search(arr1, size, element);
    printf("The element %d is found with linear_search is in the search_index = %d\n", element, search_index);

    //todo: Sorted array for binary search.
    // int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    // int size = sizeof(arr1)/sizeof(int);
    // int element = 5;
    // int search_index = binary_search(arr1, size, element);
    // printf("The element %d is found with binary_search is in the search_index = %d\n", element, search_index);
    return 0;
}