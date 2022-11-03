#include<stdio.h>
#include<stdlib.h>
#define max 5
int q[max];
int f=-1,r=-1;
void enqueue()
{
    int item;
    printf("enter data\n");
    scanf("%d",&item);
    if(f==(r+1)%max)
    printf("overflow\n");
    else if(f==-1 && r==-1)
    {
        r=f=0;
        q[r]=item;
    }
    else
    {
        r=(r+1)%max;
        q[r]=item;
    }

}
void dequeue()
{ int item;
    if(f==-1 && r==-1)
    {
        printf("underflow\n");
    }
    else if(r==f)
    {
        item=q[f];
        r=f=0;
    
        printf("%d",item);
    }
    else{
        item=q[f];
          f=(f+1)%max;
          printf("%d",item);
    }
}
void display()
{
    int i=f;
    while(i<=r)
    {
        printf("%d\t",q[i]);
        i=(i+1)%max;
    }
}
int main()
{
    int choice;
    while(choice)
    {

    printf("1.insert\n 2.delete\n 3.display\n 4.exit\n");
    
    

    printf("enter your choice\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:enqueue();
         break;
        case 2:dequeue();
         break;
        case 3:display();
         break;
        case 4:exit(0);
        break;
        default:printf("invalid\n");
    }

    }
    return 0;

}
