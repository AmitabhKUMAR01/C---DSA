#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *start=NULL;
int getnode()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    return newnode;
}

void createList(int n){
    struct node* temp;
    for (int i = 0; i < n; i++)
    {
        struct node *newnode=getnode();
        if(start==NULL)
            start=newnode;
        else{
            temp=start;
            while(temp->next!=NULL)
            {
                temp->next=newnode;
                temp=temp->next;
                
            }
        }        
    }
    
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
        ptr=ptr->next;
    }
}
int main(){
    createList(5);
    displau(start);
    return 0;
}