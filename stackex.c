#include<stdio.h>
#include<stdlib.h>
#define size 5
int s[size];
int top=-1;
void push()
{
    int item;
    printf("enetr the data\n");
    scanf("%d",&item);
    if(top==size-1)
    printf("stck is full\n");
    else
    {
        top=top+1;
        s[top]=item;
    }
}
void pop()
{ int item;
    if(top==-1)
    printf("underflow\n");
    else{
        item=s[top];
        top=top-1;
        printf("%d",item);
    }
}
void display()
{ int i;
    for(i=top;i>=0;i--)
    printf("%d",s[i]);

}
void pali()
{ 
    int num[5],rev[5],i,t;
    for(i=0,t=top;t>=0;i++,t--)
    num[i]=rev[t]=s[t];
    for(i=0;i<=top;i++)
    if(num[i]!=rev[i])
    break;
    for(t=0;t<=top;t++)
    printf("\n%d %d\n",num[t],rev[t]);

    if(i==top+1)
    printf("palindrome\n");
    else
    printf("not a palindrome\n");
}
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
            case 1:push();
            
            
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

