#include<stdio.h>
#include<string.h>

void selection(char s[])
{
    char t;
    int i,j,min,l;
    l=strlen(s);
    for(i=0;i<l-1;i++)
    {

    min=i;
    for(j=i+1;j<l;j++)
    {
        if( s[j]<s[min])
        min=j;
    }
    if(min!=i)
    {
        t=s[min];
        s[min]=s[i];
        s[i]=t;
    }
    }

printf("string after selection sort=%s\n",s);
    

}
void insertion(char s[])
{
    char t;
    int i,j,l;
    l=strlen(s);
    for(i=1;i<l;i++)
    for(j=i;j>0;j--)
    {
        if(s[j]<s[j-1])
        {
            t=s[j];
            s[j]=s[j-1];
            s[j-1]=t;
        }da


    }
    printf("string after the insertion sort=%s\n",s);
}
int main()
{
    char s[200];
    printf("enter the string\n");
    scanf("%s",s);
    selection(s);
    insertion(s);
}