#include<iostream>
using namespace std;
class matrix
{
    public:
    int row,column,a[10][10];
    
    matrix(int r,int c)
    {
        row=r;
        column=c;
    }
    void getmatrix()
    {
        int i,j;
        for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        {
            cout<<"["<<i<<","<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
    int operator == (matrix m1)
    {
        if((m1.row==row) && (m1.column==column))
        return 1;
        else
        return 0;

    }
    matrix operator +(matrix m1)
    {
        int i,j;
        matrix m2(row,column);
        for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        m2.a[i][j]=a[i][j]+m1.a[i][j];
        return m2;
    }
    matrix operator -(matrix m1)
    {
        int i,j;
        matrix m2(row,column);
        for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        m2.a[i][j]=a[i][j]-m1.a[i][j];
        return m2;
    }
    friend ostream& operator<<(ostream&,matrix &);
};
ostream& operator << (ostream& print,matrix &res)
{
    int i,j;
    for(i=0;i<res.row;i++)
    {
        for(j=0;j<res.column;j++)
        
        print<<res.a[i][j]<<" ";
        print<<endl;
        
        
    }
    return print;


}
int main()
{
    int m,n,p,q;
    cout<<"enter the row and column of the first matrix"<<endl;
    cin>>m>>n;
    matrix m1(m,n);
    cout<<"enter the row and column of the second matrix"<<endl;
    cin>>p>>q;
    matrix m2(p,q);
    
    if(m1==m2) 
    {
        cout<<"enter the elemnts of first matrix\n";
        m1.getmatrix();
        
        cout<<"enter the elemnts of second matrix\n";
        m2.getmatrix();

        matrix m3(m,n),m4(m,n);
        m3=m1+m2;
        m4=m1-m2;
        cout<<m1<<"+\n"<<m2<<"=\n"<<m3<<endl;
        cout<<m1<<"-\n"<<m2<<"=\n"<<m4;
    }
    else
    cout<<"error\n";
    


}