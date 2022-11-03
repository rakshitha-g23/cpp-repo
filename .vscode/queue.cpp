#include<iostream>
#define max 20
using namespace std;
template <class T>
class que
{
    public:
    T q[max];
    int f=-1,r=-1;
    void enqueue();
    void dequeue();
    void display();

};
template <class T>
void que<T>::enqueue()
{
    T ele;
    cout<<"enter the data\n";
    cin>>ele;
  if(r==max-1)
  cout<<"overflow\n";
  else if(r==-1 && f==-1)
  {
      f=r=0;
      q[r]=ele;4
      
  }
  else
  {
      q[++r]=ele;
  }
}
template <class T>
void que<T>::dequeue()
{
    if(f==-1)
    cout<<"underflow\n";
    else if(r==f)
    {
        cout<<"the deted elem is\n"<<q[f];
        f=r=-1;
    }
    else
    {
        cout<<"THE deleted elemts is\n"<<q[f++];
    }
}
template <class T>
void que<T>::display()
{
    if(f==-1)
        cout<<"Queue underflow";
    else
    {
        int i;
        for(i=f;i<=r;i++)
            cout<<q[i]<<" ";
    }
}
int main()
{
    int ch;
    que <int>q;
    que <double>q1;
    
  while(1){
    cout<<"\nEnter 1 to enqueue integer queue, 2 to dequeue integer queue, 3 to display integer queue,Enter 4 to enqueue double queue, 5 to dequeue double queue, 6 to display double queue, 7 to exit:-";
    cin>>ch;
    switch(ch)
    {
        case 1:q.enqueue();
               break;
        case 2:q.dequeue();
               break;
        case 3:q.display();
               break;
        case 4:q1.enqueue();
               break;
        case 5:q1.dequeue();
               break;
        case 6:q1.display();
               break;
        case 7:exit(0);      
    }
}
}