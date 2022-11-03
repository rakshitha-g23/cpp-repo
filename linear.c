#include<stdio.h>
#include<stdlib.h>
#define max 100

int create(int num)
{
    int key;
    key=num%100;
    return key;
}
void prob(int a[max],int key,int num)
{
    int count=0,flag=0;
    int i;
    if(a[key]==-1)
    {
        a[key]=num;
    }
    else
    {
        printf("collision acuurs\n");
        i=0;
        while(i<max)
        {
            if(a[i]!=-1)
        count++;
        i++;
        }
        if(count==max)
        {
            printf("hash table full\n");
            display(a);
            exit(1);
        }
        for(i=key+1;i<max;i++)
        if(a[i]==-1)
        {
            a[i]=num;
            flag=1;
            break;
        }
        i=0;
        while((i<key) && (flag==0))
        {
            if(a[i]==-1)
            {
                a[i]=num;
                flag=1;
                break;
            }
            i++;
        }
        
        


    }


    
}
void display(int a[max])
{
    int ch,i;
    printf("1.display all\n 2.filtered display\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    if(ch==1)
    {
        for(i=0;i<max;i++)
        printf("%d %d",i,a[i]);
    }
    else{
        for(i=0;i<max;i++)
        
        if(a[i]!=-1)
        {
        printf("%d %d",i,a[i]);
        continue;
        }
            
    
    }
}
void main()
{
    int a[max],key,num,i;
    int ans=1;
    for(i=0;i<max;i++)
    {
        a[i]=-1;
    }
    do
    {
        printf("enter the data\n");
        scanf("%4d",&num);
        key=create(num);
        prob(a,key,num);
        printf("do you want do continue(1/0)\n");
        scanf("%d",&ans);
        
    } while (ans);
    display(a);
}