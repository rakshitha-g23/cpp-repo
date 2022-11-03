#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
struct node 
{
    int ph;
    char name[20];
    struct node *next;
};
struct node *h,*l,*newnode,*temp;
void create()
{
    int ph;
    char name[20];
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the name and ph\n");
    scanf("%s %d",name,&ph);
    strcpy(newnode->name,name);
    newnode->ph=ph;
    newnode->next=0;
    count++;

}
void insertbeg()
{
    if(h==NULL)
    {
        create();
        h=newnode;
        l=newnode;
    }
    else
    {
        create();
        newnode->next=h;
        h=newnode;
    }
}
void insertend()
{   if(h==NULL)
    {
        create();
        h=newnode;
        l=newnode;
    }
    else
    {
        create();
        l->next=newnode;
        l=newnode;
    }
}
void display()
{   
    struct node *temp=h;
    if(h==NULL)
 {  printf("empty");
    return;
 } 
 printf("the elemnts are\n");
 
    while(temp!=0)
    {
        printf("%s %d",temp->name,temp->ph);
        temp=temp->next;
    }
    printf("no of students is %d\n",count);
    

 


}
void deletebeg()
{  
    struct node *temp=h;
    if(temp->next=0)
    {
        free(temp);
        h=0;
        l=0;

    }
    else{
        h=h->next;
        printf("the element is %s %d",temp->name,temp->ph);
        free(temp);
    }
    count--;
}
void deleteend()
{
    struct node *temp=h;
    if(temp->next=0)
    {
        free(temp);
        h=0;
        l=0;
    }
    else
    {
        while(temp->next!=l)
        temp=temp->next;
        printf("the element is %s %d",temp->name,temp->ph);
        free(l);
        temp->next=0;
        l=temp;
    }
    count--;
}
void main()
{
    int ph,choice,n,i;
    h=0;
    temp=0;
    while(choice)
    {
        printf("1.create\n 2.insertbeg\n 3.insertend\n 4.display\n 5.dletebeg\n 6.dleteend\n 7.exit\n");
        printf("enter yoyr choice\n");
        scanf("%d",choice);
        switch(choice)
        {
            case 1:printf("enter the no of students\n");
            scanf("%d",n);
            for(i=0;i<n;i++)
            insertbeg();
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

    
