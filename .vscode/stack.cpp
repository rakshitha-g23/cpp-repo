#include<iostream>
#define max 30
using namespace std;
class stack
{
    public:
    int s[max],top;
    stack()
    {
        top=-1;
    }

    friend stack operator +(stack,int);
    friend stack operator --(stack);
    friend ostream& operator <<(ostream&,stack);
};
stack operator + (stack s1,int ele)
{
    if(s1.top==max-1)
    cout<<"overflow\n";
    else
    {

    
    s1.s[++s1.top]=ele;
    }
    return s1;


}
stack operator --(stack s1)
{
    int ele;
    if(s1.top==-1)
    cout<<"underflow\n";
    else
    {
        ele=s1.s[s1.top--];
        cout<<"deleted element is\n"<<ele;
    }
    return s1;
}
ostream& operator << (ostream& print,stack s1)
{
    if(s1.top==-1)
    cout<<"underflow\n";
    else
    {
        for(int i=s1.top;i>=0;i--)
        print<<s1.s[i];
    }
    return print;
}
int main()
{
    stack s1;
    int ch;
    int ele;
    while(ch)
    {
        cout<<"1.push\n 2.pop\n 3.display\n 4.exit\n enter your choice\n";
        cin>>ch;
        switch(ch)
        {
            case 1:cout<<"ebter the elrm to push\n";
            cin>>ele;
            s1=s1+ele;
            break;
            case 2:s1=--s1;
            break;
            case 3:cout<<s1;
            break;
            case 4:exit(0);
            break;
            default:cout<<"invalid";
        }
    }

}