#include<iostream>
using namespace std;
int main()
{
    int n,i,j,z,m,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0; i<n; i++)
        {
            for(j=0; j<=i; j++)
            {
                cout<<m;
                if(j!=i)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        z=n-1;
        for(i=0; i<z; i++)
        {
            for(j=0; j<z-i; j++)
            {
                cout<<m;
                if(j!=z-i-1)
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
