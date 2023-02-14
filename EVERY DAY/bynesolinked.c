#include<stdio.h>
#include<stdlib.h>

struct node{
    
int data;
struct node *link;
};

int main(){
    struct node *head;
    head=(struct node *)malloc(sizeof(struct node));
    head->data =23;
    head->link = NULL;
    printf("%d\n",head->data);
    printf("%d\n",head->link);

    struct node *current;
    current = (struct node *)malloc(sizeof(struct node));
    current->data =12;
    head->link = current;
    printf("%d\n",current->data);
    printf("%d\n",head->link);   

    struct node *current1;
    current1 = (struct node *)malloc(sizeof(struct node));
    current1->data =12;
    current->link = current1;
    printf("%d\n",current1->data);
    printf("%d\n",current->link);   
    printf("\n\n %d\n",head->link->link);
    return 0;
}