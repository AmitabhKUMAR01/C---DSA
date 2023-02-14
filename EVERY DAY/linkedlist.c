#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head;

void beginsert();
void lastinsert();
void randominsert();
void begin_delete();
void random_delete();
void last_delete();
void display();
void search();


void main(){
    int choice = 0;
    while(choice!=9)
    {
        printf("\nchoose one option from the following\n");
        printf("\n1: insert in beginning \n 2: insert at last \n 3: insert at any random location \n 4: Delete from beginning \n 5:Delete from last \n 6: Delete node from specified location \n 7: search for an element\n 8:show \n 9:exit \n ");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                beginsert();
                break;
            case 2:
                lastinsert();
                break;
            case 3:
                randominsert();
                break;
            case 4:
                begin_delete();
                break;
            case 5:
                last_delete();
                break;
            case 6:
                random_delete();
                break;
            case 7:
                search();
                break;
            case 8:
                display();
                break;
            case 9:
                exit(0);
                break;
            default:
                printf("please enter valid choice\n");
                break;
        }
    }
}

void beginsert(){
    struct node *ptr;
    int item;
    ptr= (struct node *)malloc(sizeof(struct node*));
    if(ptr==NULL)
    {
        printf("overflow");


    }
    else{
        printf("\n Enter value\n");
        scanf("%d",&item);
        ptr->data=item;
        ptr->next=head;
        head=ptr;
        printf("\nnode inserted\n");
    }

}

void lastinsert(){
    struct node *ptr,*temp;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL)
    {
        printf("\noverflow\n");
        scanf("%d",&item);
        ptr->data=item;
        
    }
}



