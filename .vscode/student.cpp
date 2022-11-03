#include<iostream>
using namespace std;
class student
{
    public:
    char name[20],usn[20];
    int m1,m2,m3;
    
    void getdata();
    void compute();
    
};
void student :: getdata()
{
    cout<<"enter the name and usn";
    cin>>name>>usn;
    cout<<"enter the marks\n";
    cin>>m1>>m2>>m3;
}
void student :: compute()
{
    float avg;
    int min;
    if((m1<=m3) && (m1<=m2))
    {
        min=m1;
    }
    else if((m2<=m1) && (m2<=m3))
    {
        min=m2;
    }
    else
    min=m3;

    avg=(float)((m1+m2+m3)-min)/2;



    cout<<"\n name: "<<name;
    cout<<"\n usn: "<<usn;
    cout<<"\navg: "<<avg;
}
int main()
{ 
    student s[10];
    int i,n;
    cout<<"enter the no of students\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].getdata();
        s[i].compute();
        

    }
    return 0;
}