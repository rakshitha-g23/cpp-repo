#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define max 20
int s[max];
char post[max];
int top=-1;

void push(int tem)
{
    top++;
    s[top]=(int)(post[tem]-48);
}
void cal(char c)
{
    int a,b,ans; a=s[top];
    s[top]='\0';
    top--;
    b=s[top];
    s[top]='\0';
    top--;
    switch(c)
    {
        case '+': ans=b+a;
        break;
        case '-': ans=b-a;
        break;
        case '*': ans=b*a;
        break;
        case '/': ans=b/a;
        break;
        case '^': ans=pow(b,a);
        break;
        default: ans=0;
    }
    top++;
    s[top]=ans;
}
void main()
{
    int i,l;
    printf("enter the postfix\n");
    scanf("%s",post);
    l=strlen(post);
    for(i=0;i<l;i++)
    {
        if(post[i]>='0' && post[i]<='9')
        {
            push(i);
        }
        if(post[i]=='+' || post[i]=='-' || post[i]=='*' || post[i]=='/' || post[i]=='^')
        {
            cal(post[i]);
        }
    }
    printf("the resulst is %d\n",s[top]);
}