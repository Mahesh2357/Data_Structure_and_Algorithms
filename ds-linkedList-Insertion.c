#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//todo: insertion in linked list........
struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *ptr)
{
    int i = 1;
    // printf("\nThe elements of the linked list...\n");
    // printf("-----------------------------------\n");
    while (ptr != NULL)
    {
        printf("Element %d : %d\n", i, ptr->data);
        i++;
        ptr = ptr->next;
    }
}

//todo: Case 1: insertion_at_first
struct node *insertion_at_first(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

// Case 2: insertion_at_index
struct node *insertion_at_index(struct node *head, int data, int index){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3: insertion_at_end
struct node *insertion_at_end(struct node *head, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head;
    
    while (p -> next != NULL)
    {
        p = p -> next;
    }
    p ->next = ptr;
    ptr-> next = NULL;
    return head;
}

// Case 4: insertion_after_node
struct node *insertion_after_node(struct node *head,struct node *prev_node, int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr-> next = prev_node -> next;
    prev_node ->next = ptr;
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

    printf("Linked list before insertion ...\n");
    linkedListTraversal(head);
    // head = insertion_at_first(head, 87);
    // head = insertion_at_index(head, 87, 2);
     
    // head = insertion_at_end(head, 66);
    head = insertion_after_node(head, second, 99);
    printf("Linked list after insertion ...\n");
    linkedListTraversal(head);
    return 0;
}