#include<iostream>
using namespace std;
int main()
{
    int n,i,m,k,j;
    cin>>n;
    for(k=0; k<n; k++)
    {
        cin>>m;
        for(i=1; i<=m; i++)
        {
            for(j=0; j<m; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        if(k!=n-1)
        {
            cout<<endl;
        }
    }
}
