
sll *head=0,*newnode,*temp;
void sll :: create()
{
    cout<<"ener the no of node\n";
    cin>>n;
    for(i=0;i<n;i++)
    { 
        newnode= new sll;
        cout<<"enter the data\n";
        cin>>newnode->data;
        if(head==0)
        temp=head=newnode;
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void sll::insert()
{
    newnode =new sll;
    cout<<"enter the data\n";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
}
void sll :: del()
{
    temp=head;
    if(head==0)
    {
        cout<<"empty\n";
    }
    else
    {
        head=head->next;
        delete temp;
        cout<<"node deleted\n";
    }
}
void sll :: dis()
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
    sll s;
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
