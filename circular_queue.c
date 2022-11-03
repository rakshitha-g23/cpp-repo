#include<stdio.h>
#include<stdlib.h>
#define max 20
int q[max],f=-1,r=-1;
void enqueue();
void dequeue();
void display();

c

void enqueue()
{
    int item;
    printf("enter the item\n");
    scanf("%d",&item);
    if( (r+1)%max==f)
    printf("overflow\n");
    else if(r==-1 && f==-1)
    {
        f=0,r=0;
        q[r]=item;
    }
    else
    {
        r=(r+1)%max;
        q[r]=item;

    }
    
}
void dequeue()
{
    int item;
    if(r==-1 && f==-1)
    printf("underflow\n");
    else if(r==f)
    {
        item=q[f];
        r=f=-1;
        printf("%d",item);

    }
    else{
        item=q[f];
        f=(f+1)%max;
        printf("%d",item);

    }
}
void display(){
    int i=f;
    while(i<=r)
    {
        printf("%d",q[i]);
        i=(i+1)%max;

    }
    
}  
    



    

    




