#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//todo: initalized Globally
struct node *front = NULL;
struct node *rear = NULL;

struct node{
    int data;
    struct node *next;
};

//todo: Display operation.
void linkedListTraversal(struct node *ptr){
    printf("\nThe elements of the linked list...\n");
    printf("-----------------------------------\n");
    while (ptr != NULL){
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//todo: enQueue operation.
void enQueue(int val){
    struct node * n =(struct node *)malloc(sizeof(struct node));
    if(n == NULL){
        printf("Queue is Full!\n");   
    }
    else{
        n->data = val;
        n->next = NULL;
        printf("Enqued element : %d\n", val);

        if(front == NULL){
            front = rear = n;
        }
        else{
            rear->next = n;
            rear = n;
        }
    }
}

//todo: deQueue operation.
int deQueue(){
    int val = -1;
    struct node *ptr = front;

    if(front == NULL){
        printf("Queue is Empty.\n");
    }
    else{
        front= front -> next;
        val = ptr -> data;
        free(ptr);
    }
    return val;
}

int main(){
    linkedListTraversal(front);
    printf("deQueue the element : %d\n", deQueue());
    enQueue(45);
    enQueue(12);
    enQueue(11);
    enQueue(458);
    printf("deQueue the element : %d\n", deQueue());
    printf("deQueue the element : %d\n", deQueue());
    printf("deQueue the element : %d\n", deQueue());
    enQueue(1);
    enQueue(111);
    printf("\n");
    linkedListTraversal(front);
    return 0;
}