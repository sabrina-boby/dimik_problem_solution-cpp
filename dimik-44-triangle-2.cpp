#include<iostream>
using namespace std;
int main()
{
    int n,r=1,i,j,t;
    cin>>t;
    while(t--)
    {
        r=1;
        cin>>n;
        for (i=0; i<=n; i++)
        {
            for (j=0; j<=i; j++)
            {
                if (j==0 || i==0)
                {
                    cout<<1;
                }
                else
                {
                    r=r*(i-j+1) / j;
                    cout<<r;
                }

                /* if(j!=i)
                 {
                     cout<<r<<" ";
                 }
                 else
                 {
                     cout<<r;
                 } */

            }
            cout<<endl;
        }
        if(t!=0)
            cout<<endl;
    }
}
