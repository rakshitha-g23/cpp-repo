#include<stdio.h>
#include<stdlib.h>
int a[20];
int i,n,pos,digit;
void create()
{
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elemnts of the array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void insert()
{
    printf("enter the elemt to be inserted\n");
    scanf("%d",&digit);
    printf("enter the pos\n");
    scanf("%d",&pos);
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=digit;
    n=n+1;
}
void delete()
{
    printf("enter the pos\n");
    scanf("%d",&pos);
    digit=a[pos-1];
    for(i=pos-1;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("deleted element is %d\n",digit);
}
void display()
{
    printf("the elemnts ara\n");
    for(i=0;i<n;i++) 
    printf("%d\n",a[i]);
    
    
}
int main()
{
    int choice;
    while(choice)
    {
        printf("1.create\n 2.display\n 3.insert\n 4.delete\n 5.exit\n");
        printf("enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:create(); 
            break;
            case 2:display();
             break;
             case 3:insert();

             break;
             case 4:delete();
             break;
             case 5:exit(0);
             break;
             default:printf("invalid\n");

        }
    }
    return 0;
}