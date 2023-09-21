// creating link list.
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

node *create(int);
void main()
{
    node *head;
    int n;
    head = NULL;
    printf("Enter the no. of items : \t");
    scanf("%d", &n);
    head = create(n);
}
node *create(int n)
{
    node *head, *P;
    int i;
    head = (node *)malloc(sizeof(node));
    head->next = NULL;
    scanf("%d", &head->data);
    P = head;
    for (i = 0; i < n; i++)
    {
        P->next = (node *)malloc(sizeof(node));
        P = P->next;
        scanf("%d", &head->data);
        P->next = NULL;
    }
    return (head);
}