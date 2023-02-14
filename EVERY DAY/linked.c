#include<stdio.h>
#include<stdlib.h>

struct node{
    int num;
    struct node *nextptr;
}*stnode;


void createNode(int n)
{
    struct node *fnNode,*temp;
    int num ,i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if(stnode==NULL)
    {
        printf("memory cannot be allocated");
    }
    else{
        printf("enput data for node 1 : ");
        scanf("%d",&num);
        stnode->num = num;
        stnode->nextptr=NULL;
        temp = stnode;
        for ( i = 2; i <=n ; i++)
        {
            fnNode=(struct node *)malloc(sizeof(struct node));
            if (fnNode==NULL)
            {
                printf("memory cannot be allocated");
                break;
            }
            else{
                printf("Enter data for node  ");
                scanf("%d",&num);
                fnNode->num = num;
                fnNode->nextptr=NULL;   
                temp->nextptr=fnNode;
                temp=temp->nextptr;
            }
            
        }
        
    }
}


void display(){
  struct node *temp;
  if (stnode==NULL)
  {
    printf("list is empty\n");
  }
  else{
    temp=stnode;
    while(temp!=NULL)
    {
        printf("Data: %d\n", temp->num);
        temp=temp->nextptr;
    }
  }
    
}

int main(){
    int n;
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    createNode(n);
    printf("data entered in the list is\n");
    display();
    return 0;   
}