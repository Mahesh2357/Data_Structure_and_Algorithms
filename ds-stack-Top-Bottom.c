#include <stdio.h>
#include <stdlib.h>
struct stack {
    int size;
    int *arr;
    int top;
}; 
int is_Empty(struct stack * ptr) {
    if (ptr->top ==-1){
        return 1;    
    }
    return 0;
}
int is_Full(struct stack * ptr) {
    if (ptr->top == ptr->size - 1){
        return 1;
    }
    return 0;
}
//todo: push operation.
int push(struct stack * ptr, int val){
    if (is_Full(ptr))
    {
        printf("Stack is overflow!...you cannot push %d in stack\n", val);
        return -1;
    }
    ptr ->top++;
    ptr ->arr[ptr->top] = val;
}
//todo: pop operation.
int pop(struct stack * ptr){
    if (is_Empty(ptr))
    {
        printf("Stack is underflow!... you cannot pop from stack");
    }
    int val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

//todo: peek operation.
int peek(struct stack * sp, int i){
    int arr_index = sp->top -i + 1;

    if (arr_index < 0){
        printf("Invalid position in stack!\n");
        return -1;
    }
    else{
        return sp->arr[arr_index];
    }
}

// todo: top operation.
int stack_Top(struct stack *sp){
    return sp-> arr[sp-> top];
}

// todo: bottom operation.
int stack_Bottom(struct stack *sp){
    return sp-> arr[0];
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 30;
    sp->top = -1;
    sp->arr = (int *)malloc(sizeof(int) * sp->size);
    printf("Stack has been created successfully\n");

    printf("Before push, is_Full : %d\n", is_Full(sp));
    printf("Before push , is_Empty : %d\n", is_Empty(sp));
    push(sp, 11); push(sp, 22);
    push(sp, 33); push(sp, 44);
    push(sp, 55); push(sp, 66);
    push(sp, 77); push(sp, 88);
    push(sp, 99);
    push(sp, 32);
    push(sp, 69);
    push(sp, 45);
    push(sp, 99);//todo: --> 10th element
    push(sp, 779);//todo: Stack overflow , since size of stack is 10.

    printf("After push, is_Full : %d\n", is_Full(sp));
    printf("After push , is_empty : %d\n", is_Empty(sp));
    
    printf("\n");
    printf("popped %d from stack \n", pop(sp));
    printf("popped %d from stack \n", pop(sp));
    printf("popped %d from stack \n", pop(sp));
    
    printf("\n");
    printf("The top most value of stack is : %d\n", stack_Top(sp));
    printf("The bottom most value of stack is : %d\n", stack_Bottom(sp));

    printf("\n");
    printf("mahesh mungase...\n");
    return 0;
}