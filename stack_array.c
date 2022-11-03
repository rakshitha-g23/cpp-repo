#include<stdio.h>
#include<stdlib.h>
#define max 20
int s[max],top=-1;
void push();
void pop();
void display();
void pali();
int main()
{
    int choice;
    while(choice)
    {
        printf("1.push\n 2.pop\n 3.display\n 4.pali\n 5.exit\n");
        printf("entert your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();1
            2
            
                  break;
                  case 2:pop();
                  break;
               case 3:display();
                  break;
                  case 4:pali();
                  break;
                  
                  case 5:exit(0);
                  break;
                  default:
                  printf("invalid\n");

        }
    }
    return 0;

}

void push()
{
    int item;
    printf("enter the item\n");
    scanf("%d",&item);
    if(top==max-1)
    {
        printf("overflow\n");
    }
    else
    {
        top=top+1;
        s[top]=item;
    }
}
void pop()
{
    int item;
    if(top==-1)
    printf("underflow\n");
    else
    {
        item=s[top];
        top=top-1;
        printf("%d",item);
    }
    

}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    {
        printf("%d\t",s[i]);
    }
}
void pali()
{
    int digit,j,k,len=top+1,ind=0,length=0;
    int num[len],rev[len],i=0;
    while(top!=-1)
    {
        digit=s[top];
        num[i]=digit;
        top--;
        i++;

    }
    for(j=0;j<len;j++)
    {
        printf("Numbers=%d\n",num[j]);

    }
    printf("reverse operation:");
    for(k=len-1;k>=0;k--)
    {
        rev[k]=num[ind];
        ind++;
    }
    printf("reverse arraya:");
    for(k=0;k<len;k++)
    printf("%d\n",rev[k]);
    printf("checking for palindrome");
    {
        for(i=0;i<len;i++)
        {
            if(rev[i]==num[i])
            length=length+1;
        
        }
        if(length==len)
        printf("it is palindrome\n");
        else
        printf("not palindrome\n");
    }
    top=len-1;
}


    

