#include<iostream>
using namespace std;
class student
{
    public:
    int reg,age;char name[20];
    void getdata();
};
class ug:public student
{
    public:
    int sem;
    float fees,sti;
    void getdata();

};
class pg:public student
{ 
    public:
    int sem;
    float fees,sti;
    void getdata();
};
void student::getdata()
{
    cout<<"enter the reg and age\n";
    cin>>reg>>age;
    cout<<"enter the name\n";
    cin>>name;
}
void ug::getdata()
{
    student::getdata();
    cout<<"enter the sem\n";
    cin>>sem;
    cout<<"enter the fees and stippend\n";
    cin>>fees>>sti;
}
void pg::getdata()
{
    
    student::getdata();
    cout<<"enter the sem\n";
    cin>>sem;
    cout<<"enter the fees and stippend\n";
    cin>>fees>>sti;
}
int main()
{ ug u[20];
 pg p[20];
    int i,n,j;
    cout<<"enter the number of ug studenys\n";
    cin>>n;
    cout<<"enter the details\n";
    for(i=0;i<n;i++)
    u[i].getdata();
    for(i=1;i<=8;i++)
    {
        int found=0,count=0;
        int sum=0;
        float avg;
        for(j=0;j<n;j++)
        {
            if(u[j].sem==i)
            {
                found=1;
                count++;
                sum=sum+u[j].age;
            }
        
        }
        if(found==1)
        {
            avg=sum/count;
            cout<<"the average age of sem "<<i<<"is "<<avg;
        }
    }
    cout<<"enter the number of pg student\n";
    cin>>n;
        cout<<"enter the details\n";
    for(i=0;i<n;i++)
    p[i].getdata();
    for(i=1;i<=4;i++)
    {
        int found=0,count=0;
        int sum=0;
        float avg;
        for(j=0;j<n;j++)
        {
            if(p[j].sem==i)
            {
                found=1;
                count++;
                sum=sum+p[j].age;
            }
        
        }
        if(found==1)
        {
            avg=sum/count;
            cout<<"the average age of sem "<<i<<"is "<<avg;
        }
    }


}
