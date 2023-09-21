#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node{
    int top;
    int data;
    struct node* next;
};

void LinkedList_Traversal(struct node *ptr){
    while (ptr != NULL){
        printf("The Element is : %d\n", ptr->data);
        ptr = ptr -> next;
    }
}

int IsEmpty(struct node* top){
    if (top == NULL){
        return 1;
    }
    return 0;    
}

int IsFull(struct node* top){
    struct node* m = (struct node* )malloc(sizeof(struct node));
    if (m == NULL){
        return 1;
    }
    return 0; 
}

struct node* push(struct node* top, int x){
    if (IsFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct node* m = (struct node *)malloc(sizeof(struct node));
        m->data = x;
        m->next = top;
        top = m;
        return top;
    }
}

int pop(struct node** top){
    if (IsEmpty(*top)){
        printf("Stack Underflow\n");
    }
    else{
        struct node* m = *top;
        *top = (*top) ->next;
        int x = m->data;
        free(m);
        return x;
    }
}

int main(){
    struct node *top = NULL;
    top = push(top, 55);
    top = push(top, 56);
    top = push(top, 57);
    top = push(top, 58);
    top = push(top, 59);
    LinkedList_Traversal(top);
    printf("\n");
    
    int Element = pop(&top);
    printf("The Element %d is pop from stack\n", Element);
    LinkedList_Traversal(top);
    return 0;
}