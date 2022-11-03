#include<stdio.h>
#include<stdlib.h>
int a[20];
int i,pos,n,digit;
void create();
void dissplay();
void insert();
void delete();

c
}

void create()
{
    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the elements of arry\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

}
void display()
{
    printf("the elements are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);


    }
}
void insert()
{
    printf("enter the position\n");
    scanf("%d",&pos);
    printf("enter the number to be inserted\n");
    scanf("%d",&digit);
    for(i=n-1;i>=pos-1;i--)
    a[i+1]=a[i];
    a[pos-1]=digit;
    n=n+1;


}
void delete()
{
    printf("enter the position\n");
    scanf("%d",&pos);
    digit=a[pos-1];
    for(i=pos-1;i<n-1;i++)
    a[i]=a[i+1];
    n=n-1;
    printf("deleted elemnts are=%d",digit);
    
}
