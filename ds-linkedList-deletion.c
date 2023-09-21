#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//Deletion of the  linked lists:
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    int i = 1;
    printf("-----------------------------------\n");
    while (ptr != NULL)
    {
        printf("Element %d : %d\n", i, ptr->data);
        i++;
        ptr = ptr->next;
    }
}
// Deleting the first node            -> Time complexity:  O(1)
// Deleting a node in between   -> Time complexity:  O(n)
// Deleting the last node            -> Time complexity:  O(n)
// Deleting the element with a given value from the linked list     -> Time complexity:  O(n)

// case 1 : deletion_at_first
struct node *deletion_at_first(struct node *head){
    struct node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

// case 2 : deletion_at_index
struct node *deletion_at_index(struct node *head, int index){
    struct node *p= head;
    struct node *q = head->next;
    for (int i = 0; i < index -1; i++)
    {
        p = p ->next;
        q = q ->next;
    }
    p->next = q ->next;
    free(q);
    return head;
}

// case 3: deletion_in_between
struct node * deletion_at_last(struct node *head){
    struct node *p = head;
    struct node *q = head ->next;

    while(q-> next != NULL){
        p = p ->next;
        q = q ->next;
    }
    p -> next = NULL;
    free(q);
    return head;
}

// case 4: deletion of element with given value of linked list.
struct node *deletion_in_between(struct node *head, int value){
    struct node *p = head;
    struct node *q = head ->next;
    while(q-> data != value && q -> next != NULL){
        p = p ->next;
        q = q ->next;
    }
    if (q ->data == value){
        p -> next = q ->next;
        free(q); 
    }
    return head;
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
    
    printf("Linked list before deletion : \n");
    linkedListTraversal(head);

    // head = deletion_at_first(head);
    // head = deletion_at_index(head, 2);
    // head = deletion_at_last(head);
    head = deletion_in_between(head, 88);

    printf("Linked list after deletion : \n");
    linkedListTraversal(head);
    return 0;
}