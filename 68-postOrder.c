#include<stdio.h>
#include<malloc.h>

struct node {
    int data;
    struct node *l;
    struct node *r;
};

struct node * Create_node(int data){
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->l = NULL;
    n->r = NULL;
    return n;
}

void preOrder_node(struct node *root){
    if(root!=NULL){
        printf("preOrder_node");
        printf("%d", root->data);
        preOrder_node(root->l);
        
    }
}