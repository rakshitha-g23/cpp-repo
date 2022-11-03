#include<stdio.h>
#include<ctype.h>
#define size 20
char s[size];
int top=-1;
void push(char ele)
 {
     s[++top]=ele;
 }
char pop()
 {
     return (s[top--]);
 }
int pr(char ele)
 {
     switch(ele)
     {
         case '#' : return 0;
         case '(': return 1;
         case '+': 
         case '-': return 2;
         case '*': 
         case '/': 
         case '%': return 3;
         case '^': return 4;
     }
 }
void main()
 {
     char infx[20],pofx[20],ch,ele;
     int k=0,i=0;
     printf("enter the infix\n");
     scanf("%s",infx);
     push('#');
     while((ch=infx[i++])!='\0')
     {
         if(ch=='(')
         {
             push(ch);

         }
         else if(isalnum(ch))
         {
             pofx[k++]=ch;
         }
         else if(ch==')')
         {
             while(s[top]!='(')
             {
                 pofx[k++]=pop();
                 ele=pop();
             }
             
             

         }
         else 
         {
             while(pr(s[top])>=pr(ch))
             pofx[k++]=pop();

             push(ch);
         }
     }
     while(s[top]!='#')
     pofx[k++]=pop();
     pofx[k]='\0';
     printf("the postfix is %s\n",pofx);

 }
 
 