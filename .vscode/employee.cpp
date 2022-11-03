#include<iostream>
using namespace std;
class emp
{   public:
    int num;
    char name[20];
    float basic,it,da,netsal;

    void getdata();
    void compute();
    void display();

};
void emp :: getdata()
{
    cout<<"enter the name\n";
    cin>>name;
    cout<<"enter the num\n";
    cin>>num;
    cout<<"enter the basic\n";
    cin>>basic;

}
void emp::compute()
{
    da=(.52*basic);
    float gsal=basic+da;
    it=(.30*gsal);
    netsal=gsal-it;
}
void emp:: display()
{
    cout<<"\n\nname: "<<name;
    cout<<"\nnumber: "<<num;
    cout<<"\nnetsalary: "<<netsal<<endl;
}
int main()
{
    int i,n;
  emp e[50];
  cout<<"enter the no fo emp\n";
  cin>>n;
  for(i=0;i<n;i++)
  {
      e[i].getdata();
      e[i].compute();
      e[i].display();
  }
  return 0;
}