#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
};
struct node *top=NULL;
void push_elements();
void pop_elements();
void peek_elements();
void display();
void main()
{
    int choice,data;
    while(1)
    {
        printf("1.PUSH OPERATION\n");
        printf("2.POP OPERATION\n");
        printf("3.PEEK OPERATION\n");
        printf("4.DISPLAY\n");
        printf("5.EXIT\n");
        printf("Enter your choice,you want::\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                printf("Enter the elements you want to push::\n");
                scanf("%d",&data);
                push_elements();
                break;
            }
            case 2:
            {
                printf("Enter the data you want to pop::\n");
                scanf("%d",&data);
                pop_elements();
                break;
            }
            case 3:peek_elements();
            break;
            
            case 4:display();
            break;
            
            case 5: exit(0);
            break;
            
            default:
            {
                printf("Wrong choice\n");
                break;
            }
        }
    }
}

void push_elements(int value)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
        temp->data=value;
        temp->next=top;
        top-temp;
    
}

void pop_elements()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("popped elemets %d",top->data);
    }
}
void peek_elements()
{
    if(top==NULL)
    {
        printf("Stack is emptly\n");
    }
    else
    {
        printf("top elemets %d",top->data);
    }
}
void display()

 {
     struct node *temp;
    temp=top;
    if(top==NULL);
    {
        printf("list is empty\n");
    }
    
    
        while(temp!=NULL);
        {
        printf("%d",temp->next);
        temp=temp->next;
        }
    
    
}