#include<stdio.h>
void towers(int,char,char,char);
void main()
{
    int n;printf("enter the no of disks\n");
    scanf("%d",&n);
    towers(n,'a','c','b');
}
void towers(int n,char from,char to,char aux)
{
    if(n==1)
    {
        printf("move the 1 disk from %c to %c\n",from,to);
        return;
    }
    towers(n-1,from,aux,to);
    printf("move the %d disk from %c to %c\n",n,from,to);
    towers(n-1,aux,to,from);


    
}