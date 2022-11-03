#include<iostream>
#include<math.h>
using namespace std;
class octal
{
    int oct[15],count;
    public:
    octal(int x)
    { 
        int rem,a[15],i=0;
        while(x!=0)
        {
            rem=x%8;
            x=x/8;
            a[i++]=rem;
        }
        count=i;
        int n=count-1;
        for(i=0;i,count;i++)
        {
            oct[i]=a[n];
            n--;
        }
    }
    int operator + (int k)
    {
        int x=0,j=count-1,i;
        for(i=0;i<count;i++)
        {
            x=x+oct[j]*pow(8,i);
            j--;
        }
        return(x+k);
    }
    friend ostream& operator<< (ostream&,octal);

};
ostream& operator<< (ostream& print,octal o)
{
    for( int i=0;i<o.count;i++)
    
        print<<o.oct[i];
        return print;
    
}
int main()
{
    int x,k,y;
    cout<<"ente rthe integer\n";
    cin>>x;
    octal h=octal(x);
    cout<<"the octal of"<<x<<"is"<<h<<endl;
    cout<<"enter the number to add\n";
    cin>>k;
    y=h+k;
    cout<<"the integer aftr adding is"<<y;
    return 0;
}