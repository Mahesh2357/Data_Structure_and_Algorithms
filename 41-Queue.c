#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

//todo: Queue 
struct Queue{
    int size;
    int front;
    int rear;
    int *arr;
};

//todo: is_Empty function.
int is_Empty(struct Queue *q){
    if(q -> rear == q ->front){
        return 1;
    }
    return 0;
}

//todo: is_Full function.
int is_Full(struct Queue *q){
    if(q -> rear == q ->size -1){
        return 1;
    }
    return 0;
}

//todo: Enqueue function.
int enQueue(struct Queue *q, int val){
    if(is_Full(q)){
        printf("Queue is full...\n");
    }
    else{
        q -> rear++;
        q -> arr[q -> rear] = val;
        printf("Enqued element : %d\n", val);
    }
}

//todo: deQueue function.
int deQueue(struct Queue *q){
    int a = -1;
    if(is_Empty(q)){
        printf("Queue is Empty. \n");
    }
    else{
        q -> front++;
        a = q -> arr[q -> front];
    }
    return a;
}

int main(){
    struct Queue q;
    q.size = 4;
    q.front = q.rear = -1;
    q.arr = (int *)malloc(q.size *sizeof(int));
     
    //todo: Enqueue the few elements
    enQueue(&q, 43);
    enQueue(&q, 43);
    enQueue(&q, 99);
    enQueue(&q, 88);
    printf("\n");
    printf("deQueue element : %d\n", deQueue(&q));
    printf("deQueue element : %d\n", deQueue(&q));
    printf("deQueue element : %d\n", deQueue(&q));
    printf("deQueue element : %d\n", deQueue(&q));
    printf("\n");
    enQueue(&q, 9);
    enQueue(&q, 68);
    enQueue(&q, 68);
    enQueue(&q, 68);

    printf("\n");
    if(is_Empty(&q)){
        printf("Queue Underflow...\n");
        exit(1);
    }
    if(is_Full(&q)){
        printf("Queue Overflow...\n");
        exit(1);
    }
     
    return 0;
}