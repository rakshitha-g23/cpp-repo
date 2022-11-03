#include<iostream>
using namespace std;
class complex
{
    public:
    int r,i;
    void getdata()
    {
        cout<<"enter the real and i part\n";
        cin>>r>>i;
    }
    void print()
    {
        cout<<r<<" + i"<<i;
    }
     complex add(int,complex );
    
    complex add(complex ,complex);
};

      complex complex::add(int a,complex c)
    {
        complex t;
        t.r=a+c.r;
         t.i=c.i;
         return t;
    }
    complex complex:: add(complex c1,complex c2)
    {
        complex t;
        t.r=c1.r+c2.r;
        t.i=c1.i+c2.i;
        return t;
    }


int main()
{
    complex c1,c2,c3,c4;
    int a;
    cout<<"enter the first complex\n";
    c1.getdata();
    cout<<"C1 :";
    c1.print();
    cout<<"enter the number to ne add\n";
    cin>>a;
    c4=c1.add(a,c1);
    cout<<"after adding the complex is\n";
    c4.print();
    cout<<"enter the second complex number\n";
    c2.getdata();
    cout<<"C2:";
    c2.print();
    c3=c3.add(c4,c2);
    cout<<"the complex number after add\n";
    cout<<"c3:";
    c3.print();
    return 0;
}