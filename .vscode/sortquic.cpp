#include<iostream>
using namespace std;
template<class t>
int par(t a[],int low,int high)
{
    t temp,key;
    key=a[low];
    int i=low+1;
    int j=high;
    do{
        while((a[i])<=key && (i<j))
        i++;
        while(a[j]>key)
        j--;
        if(i<j)
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    
    }while(i<j);
    temp=a[j];
        a[j]=a[low];
        a[low]=temp;
        return j;
}
template<class t>
void quick(t a[] ,int low,int high)
{ int j;
    if(low<high)
    {
        j=par(a,low,high);
        quick(a,low,j-1);
        quick(a,j+1,high);
    }

}
int main()
{   int ch;
    int i,j,a[30],n,m;
    double d[30];
    cout<<"1.integers\n 2.double \n 3.exit \n";
    cout<<"\n enter your choice\n";
    cin>>ch;
    switch(ch)
    {
        case 1:cout<<"\n enter number of integers\n";
               cin>>n;
               cout<<"\n enter array elements\n";
               for(i=0;i<n;i++)
               cin>>a[i];
               quick(a,0,n-1);
               cout<<"\n sorted list is \n";
               for(i=0;i<n;i++)
               cout<<a[i];
               break;
        case 2:cout<<"\n enter number of double variables\n";
               cin>>n;
               cout<<"\n enter array elements\n";
               for(j=0;j<n;j++)
               cin>>d[j];
               quick(d,0,n-1);
               cout<<"\n sorted list is \n";
               for(j=0;j<n;j++)
               cout<<d[j]<<" ";
               break;
        case 3:exit(0);
        default:cout<<"\n invalid choice\n";
               break;

    }
    return 0;

}
