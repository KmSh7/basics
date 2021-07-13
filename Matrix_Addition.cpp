#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1,m1;
    cout<<"number of rows=";cin>>n1;
    cout<<"number of columns=";cin>>m1;
    int  a[n1][m1],b[n1][m1];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {cout<<"A["<<i<<"]["<<j<<"]=";cin>>a[i][j];}
    }
     for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {cout<<"B["<<i<<"]["<<j<<"]=";cin>>b[i][j];}
    }
    cout<<"A+B=\n";
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        {
            cout<<a[i][j]+b[i][j]<<"  ";
        }
        cout<<"\n";
    }

}