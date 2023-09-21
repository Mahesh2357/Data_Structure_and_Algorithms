#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
};
//todo: is_Empty operation.
int is_Empty(struct stack *ptr)
{
    if (ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
//todo: is_Full operation.
int is_Full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1){
        return 1;
    }
    else{
       return 0;
    }
}

//todo: push operation for Paranthisis.
int push(struct stack * ptr, char val){
    if (is_Full(ptr))
    {
        printf("Stack is overflow!...you cannot push %d in stack\n", val);
        return -1;
    }
    ptr ->top++;
    ptr ->arr[ptr->top] = val;
}

//todo: pop operation for Paranthisis.
char pop(struct stack * ptr){
    if (is_Empty(ptr))
    {
        printf("Stack is underflow!... you cannot pop from stack");
    }
    char val = ptr->arr[ptr->top];
    ptr->top--;
    return val;
}

//todo: Paranthisis operation.
int Paranthisis_Match(char *exp){
    //create and initialized stack
    struct stack * sp;
    sp ->size =50;
    sp ->top = -1;
    sp ->arr = (char *)malloc(sp ->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++){
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(sp, '(');
        }
        else if (exp[i] == ')' || exp[i] == '{' || exp[i] == '['){
            if (is_Empty(sp)){
                return 0;
            }
            pop(sp);
        } 
    }
    return is_Empty(sp) ? 1 : 0;
}

int main()
{
    char *exp = "(4)*(5)";

    if (Paranthisis_Match(exp)){
        printf("\n The Paranthisis is Matching\n");
    }
    else{
        printf("\n The Paranthisis is not Matching\n");
    }
    return 0;
}