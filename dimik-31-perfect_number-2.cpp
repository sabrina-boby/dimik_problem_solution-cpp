#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,j,t,x;
    long long int sum;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=2; i<=n; i++)
        {
            sum=1;
            x=sqrt(i);
            //cout<<"i = "<<i<<" x = "<<x<<endl;
            for(j=2; j<=x; j++)
            {
                if(i%j==0)
                {
                    sum=sum+j+i/j;
                   // cout<<" j = "<<j<<" i/j = "<<i/j<<endl;
                   //cout<<"sum = "<<sum<<endl;
                }
            }
            if(sum==i)
            {
                cout<<i<<endl;
            }
        }
        if(t!=0)
        {
            cout<<endl;
        }
    }
}


