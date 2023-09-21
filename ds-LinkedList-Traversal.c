#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
//* Creating and traversing in a linked list

//!  linked lists:

// These are stored in non-contiguous memory locations.
//todo: Insertion and deletion in a linked list are very efficient in comparison to arrays.
//todo: An element called node holds the value as well as a pointer to the next element.
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    int i = 1;
    printf("\nThe elements of the linked list...\n");
    printf("-----------------------------------\n");
    while (ptr != NULL)
    {
        printf("Element %d : %d\n", i, ptr->data);
        i++;
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // allocate memory location in linked list in heap.
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // linked first and second nodes
    head->data = 55;
    head->next = second;

    // linked second and third nodes
    second->data = 33;
    second->next = third;

    // linked third and null struct nodes
    third->data = 88;
    third->next = fourth;

    fourth->data = 99;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}