#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define max 50
int stack[max];
char post[max];
int top=-1;
void pushstack(int temp);
void calculator(char c);
int main()
{
    int i;
    printf("enter the suffix\n");
    scanf("%s",post);
    for(i=0;i<strlen(post);i++)
    {
        if(post[i]>='0'&& post[i]<='9')
        pushstack(i);
        if(post[i]=='+' || post[i]=='-' || post[i]=='*' || post[i]=='/'|| post[i]=='^')
        calculator(post[i]);
    }
    printf("result=%d",stack[top]);

}
void pushstack(int temp)
{
    top++;
    stack[top]=(int)(post[temp]-48);


}
void calculator(char c)
{
    int a,b,ans;
    a=stack[top];
    stack[top]='\0';
    top--;
    b=stack[top];2
    stack[top]='\0';
    top--;
    switch(c)
    {
        case '+':
        ans=b+a;
        break;
        case '-':
        ans=b-a;
        break;
        case '*':
        ans=b*a;break;
        case '/':
        ans=a/b;
        break;
        case '^':
        ans=pow(b,a);
        break;
        default:
        ans=0;
    }
top++;
stack[top]=ans;
}

