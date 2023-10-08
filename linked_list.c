#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

};
int main(){
    //node declare
    struct node *a = NULL;
    struct node *b = NULL;
    struct node *c = NULL;
    //memory allocation for
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    //asign value
    a->data = 10;
    b->data = 11;
    c->data = 12;
    a->next = b;
    b->next = c;
    c->next = NULL;

    while(a != NULL){
        printf("%d \n", a->data);
        a = a->next;
    }

    return 0;

}