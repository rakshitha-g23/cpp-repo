#include<iostream>
int count=0;
using namespace std;
class dll{
    int data,n,i,pos;
    dll *prev,*next;
    public:
    void create();
    void insert();
    void del();
    void dis();
};
dll *head=NULL,*temp=NULL,*newnode;
void dll::create()
{
    cout<<"enter the no of nodes\n";
    cin>>n;
    for(i=0;i<n;i++)
    {
        newnode=new dll;
        cout<<"enter the data\n";
        cin>>newnode->data;
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        temp=head=newnode;
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        count++;
    }
}
void dll :: insert()
{
    temp=head;
    newnode =new dll;
    cout<<"entr the data\n";
    cin>>newnode->data;
    cout<<"enter the pos\n";
    cin>>pos;
    for(i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
     
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->prev=newnode;    
    count++;
}
void dll:: del()
{
    temp=head;
    cout<<"enter the pos\n";
    cin>>pos;
    if(pos==1)
    {
        head=head->next;
        head->prev=0;
        delete temp;
    }
    else if(pos==count)
    {
        
    }
    else
    {
    for(i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    delete temp;
    }
    
    

}
void dll :: dis()
{
    temp=head;
    if(head==0)
    cout<<"empty\n";
    else
    {
        while(temp!=0)
        {
            cout<<temp->data<<" ";
             temp=temp->next;
        }

        

    }
}
int main(){
    int ch;
    dll s;
    while(1){
    cout<<" 1.create\n 2.insert\n 3.delete\n 4.display\n 5.Exit\nEnter your choice\n";
    cin>>ch;
    switch(ch){
        case 1:s.create();
               break;
        case 2:s.insert();
               break;
        case 3:s.del();
               break;
        case 4:s.dis();
               break;
        case 5:exit(0);
        default:cout<<"invalid\n";
    }
    }
    return 0;
}


     
    
    
    
    

