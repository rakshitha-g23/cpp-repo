#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class s
{
    public:
    int id;
    string name;
    void read(ofstream &);
    void write(ifstream &);
};
void s::read(ofstream &fout)
{
    cout<<"enter the name and id\n";
    cin>>name>>id;
    fout<<"name: "<<name<<"id: "<<id;
}
void s::write(ifstream &fin)
{
    string line;
    while(getline(fin,line))
    {
        cout<<line<<endl;
    }
}
int main()
{
    int n,i;
    cout<<"enter the no of studne\n";
    cin>>n;
    s s1;

    ofstream fout;
    fout.open("data1.txt");
    for(i=0;i<n;i++)
    s1.read(fout);
    fout.close();
    cout<<"contents are\n";
    ifstream fin;
    fin.open("data1.txt");
    s1.write(fin);
    fin.close();
    return 0;




}