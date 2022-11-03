#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
struct node {
    struct node *prev;
    int ph;
    char name[10];
    struct node *next;
}*h,*l,*newnode,*temp,*temp1;

void create()
{
    int ph;
    char name[10];
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the name and ph\n");
    scanf("%s %d",name,&ph);
    strcpy(newnode->name,name);
    newnode->ph=ph;
    newnode->next=0;
    newnode->prev=0;
    count++;
}

void insertbeg()
{
    if(h==0)
    {
        create();
        h=newnode;
        l=newnode;
    }
    else{
        create();
        newnode->next=h;
        h->prev=newnode;
        h=newnode;

    }
}
void insertend()
{
    if(h==0)
    {
        create();
        h=newnode;
        l=newnode;
    }
    else{
        create();
        l->next=newnode;
        newnode->prev=l;
        l=newnode;
    }
}
void display()
{
    struct node *temp=h;
    if(h==0)
    {
        printf("list is empty\n");
        return;
    }
    else
    {
        printf("the data is\n");
        while(temp!=0)
        {
            printf("%s %d",temp->name,temp->ph);
            temp=temp->next;
        }
        
    }
    printf("the no of empp=%d",count);
}
void deletebeg()
{
    struct node *temp=h;
    if(temp->next==h)
    {
        free(temp);
        h=0;
        l=0;
    }
    else{
        h=h->next;
        printf("%s %d",temp->name,temp->ph);
        h->prev=0;
        free(temp);
    }
    count--;

}
void deleteend()
{
    struct node *temp=h;
    struct node *temp1=l;
    if(temp->next==0)
    {
        free(temp);
        h=0;
        l=0;
    }
    else{
        l=l->prev;
        printf("%s %d",temp1->name,temp->ph);
        l->next=0;
        free(temp1);
        
    }
    count--;

    
    

}

void main()
{
    int choice,n,i;
    h=0;
    temp=temp1=0;
    while(choice)
    {
        printf("1.create\n 2.insertbeg\n 3.insertend\n 4.display\n 5.dletebeg\n 6.dleteend\n 7.exit\n");
        printf("enter yoyr choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the no of emp\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            insertend();
            break;
            case 2:insertbeg();
            break;
            case 3:insertend();
            break;
            case 4:display();
            break;
            case 5:deletebeg();
            break;
            case 6:deleteend();
            break;	
            case 7:exit(0);
            break;
            default:printf("invalid\n");
        }

    }
}
