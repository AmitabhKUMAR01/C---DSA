#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *link;
};

void count_of_nodes(struct node *head){
    int count = 0;
    if(head==NULL){
        printf("Linked list is empty\n");
        return;
    }
    struct node *ptr;
    ptr = head;
    while (ptr!=NULL)
    {
        count++;
        ptr = ptr->link;
    }
    
    printf("count: %d\n", count);
}
void displau(struct node *head)
{
    if (head==NULL)
    {
        printf("linked list is empty\n");
        return;

    }
    struct node *ptr;
    ptr=head;
    while(ptr!=NULL)    
    {
        printf("\t %d  \t", ptr->data);
        ptr=ptr->link;
    }
}
int main(){
    struct node *head;
    struct node *node0;
    head=node0;
    node0=(struct node *)malloc(sizeof(struct node));
    node0->data =1;
    node0->link =NULL;

    struct node *node1;
    node1=(struct node *)malloc(sizeof(struct node));
    node1->data =2;
    node0->link =node1;

    struct node *node2;
    node2=(struct node *)malloc(sizeof(struct node));
    node2->data =3;
    node2->link =NULL;
    node1->link =node2;

    // printf("%d\n",node0->data);
    // printf("%d\n",head->link);
    // printf("%d\n",node1->data);
    // printf("%d\n",node1->link);
    // printf("%d\n",node2->data);
    // printf("%d\n",head->link->link);
    displau(node0);
    count_of_nodes(node0);
return 0;
}