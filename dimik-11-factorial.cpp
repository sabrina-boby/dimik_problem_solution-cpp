#include<iostream>
using namespace std;
int main()
{
    long long int k=1;
    int n,i,m,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        k=1;
        cin>>m;
        if(m==0)
        {
            cout<<0<<endl;
        }
        else
        {
            for(j=m; j>=1; j--)
            {
                k=k*j;
            }
            cout<<k<<endl;
        }
    }
}
