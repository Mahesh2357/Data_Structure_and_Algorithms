#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack{
    int size;
    int top;
    char *arr;
};

// todo: top.
int stack_Top(struct stack *sp){
    return sp-> arr[sp-> top];
}

//todo: is_Empty .
int is_Empty(struct stack *ptr){
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}
//todo: is_Full.
int is_Full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
       return 0;
}

//todo: push
void push(struct stack * ptr, char val){
    if (is_Full(ptr)){
        printf("Stack is overflow!...you cannot push %d in stack\n", val);
    }
    else{
       ptr ->top++;
       ptr ->arr[ptr->top] = val;
    }
}

//todo: pop
char pop(struct stack * ptr){
    if (is_Empty(ptr))
    {
        printf("Stack is underflow!... you cannot pop from stack");
        return -1;
    }
    else{
       char val = ptr->arr[ptr->top];
       ptr->top--;
       return val;
    }
}

int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2;
    else
        return 0;
}

int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/')
        return 1;
    else
        return 0;
}

char * infix_to_postfix(char * infix){
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp ->top = -1;
    sp -> size = 10;
    sp -> arr =(char *)malloc(sp ->size * sizeof(char));
    char * postfix = (char *)malloc((strlen(infix) + 1) *sizeof(char));
    int i = 0;
    int j = 0;
    while(infix[i] != '\0'){
            if(!isOperator(infix[i])){
                postfix[j] = infix[i];
                j++;
                 i++;
            }
            else{
                if(precedence(infix[i])> precedence(stack_Top(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j] = pop(sp);
                j++;
            }
        }
    }
    while(!is_Empty(sp)){
        postfix[j] = pop(sp);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}

int main(){
    char *infix =  "x+y+z";
    printf("The required postfix expression is : %s\n", infix_to_postfix(infix));

    return 0;
}
