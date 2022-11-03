#include<iostream>
using namespace std;
class rectangle
{
    int l,b;
    public:
    rectangle(int x,int y)
    {
        l=x;
        b=y;
    }
    ~rectangle()
    {
        cout<<"constructor called\n";
    }
    void len()
    {
        cout<<"lenght is: "<<l;
    }
    void breadth()
    {
        cout<<"breadth is: "<<b;
    }
    friend void area(rectangle);
    
    
};

void area(rectangle r)
{
    cout<<"\nthe area is: "<<r.l*r.b;
}
int main()
{
    int x,y;
    cout<<"enter the lenght and breadth\n";
    cin>>x>>y;
    rectangle r(x,y);
    r.len();
    r.breadth(); 
    area(r);
}