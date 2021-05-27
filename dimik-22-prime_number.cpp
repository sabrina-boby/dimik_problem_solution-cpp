#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m,i,j,x,count=0,t;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>m;
        cin>>n;

        int a[100000]= {0};
        x=sqrt(n);
        a[0]=1;
        a[1]=1;
        for(i=2; i<=x; i++)
        {
            j=i;
            if(a[j]==0)
            {
                while(i*j<=n)
                {
                    a[i*j]=1;
                    j++;
                }
            }
        }

        for(i=m; i<=n; i++)
        {
            if(a[i]==0)
            {
               // cout<<i<<" prime"<<endl;
                count++;
            }
        }
        cout<<count<<endl;
    }
}
