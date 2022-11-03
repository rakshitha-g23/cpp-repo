#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count=0;
struct node
{
    int phno;
    char name[20];
    struct node *next;

};
struct node *newnode;
struct node *head,*last=0;
void create()
{
    int phno;
    char name[20];
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter the phone and name\n");
    newnode->next=0;
    newnode->phno=phno;
    strcpy(newnode->name,name);
    count++;
}
void insert_atbeg()
{
    if(head==0)
    {
        create();
        head=newnode;
        last=newnode;
    }
    else{
        create();
        newnode->next=head;
        head=newnode;
    }

}
void insert_atend()
{
    if(head==0)
    {
        create();
        head=newnode;
        last=newnode;
    }
    else{
        create();
        last->next=newnode;
        last=newnode;
    }
}
void delete_atbeg()
{
    struct node *temp=head;
    if(temp->next=0)
    {
        free(temp);
        head=0;
    }
    else
    {
        head=head->next;
        printf("%s %d",temp->name,temp->phno);
        free(temp);

    }
    count--;
}
void delete_atend()
{
    struct node *temp,*temp1;
    temp=head,temp1=last;
    if(temp->next=0)
    {
        free(temp);
        head=0;
    }
    else{
        while(temp->next!=last)
        {
            temp=temp->next;
            printf("%s %d",temp->name,temp->phno);
            temp->next=0;
            free(head);
        }

        
    }
    count--;
}
void display()
{ struct node *temp=head;
    if(head==0)
    {
        printf("empty\n");
        return;
    }
    while(temp!=0)
    {
        printf("%s %d",temp->name,temp->phno);
        temp=temp->next;

    }
    printf("no of students=%d",count);
    
    


}
int main()
{
    int choice,i,n;
    while(choice)
    {
        printf("1.create\n 2.inatbeg\n 3.inatend\n 4.dltatbeg\n 4.dltatend\n 5.display\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("enter the no of the students\n");
            scanf("%d",&n);
            for(i=0;i<n;i++)
            insert_atbeg();
            break;
            case 2:insert_atbeg();
            break;
            case 3:insert_atend();
            break;
            case 4:delete_atbeg();
            break;
            case 5:delete_atend();
            break;
            case 6:display();
            break;
            case 7:exit(0);
            break;
            default:printf("invlaid\n");

        }
        
        
    }
    return 0;
}


