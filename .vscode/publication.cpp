#include<iostream>
using namespace std;
class publication
{
    public:
    string title;
    publication()
    {
        title="Ieeoop";
    
    }
    void print()
    {
        cout<<"title:"<<title;
    }

};
class book:public publication
{
    public:
    float an;
    book()
    {
        an=681.3;

    }
    void print()
    {
        publication::print();
        cout<<"\nan number:"<<an;
    }
};
class mag:public publication
{
    public:
    int vol;
    mag()
    {
        vol=1;
    }
    void print()
    {
        cout<<"\nvolume:"<<vol;
    }
};
class journal:public book,mag{
    public:
    void print()
    {
        book::print();
        mag::print();
    }
};
int main()
{
    journal j;
    j.print();
    return 0;
}
