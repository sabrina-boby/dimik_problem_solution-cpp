#include<iostream>
using namespace std;
int main()
{
    long long int k=1;
    int n,i,m,j,count=0;
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
        }

        count=0;
        while(k%10==0)
        {
            count++;
            k=k/10;
        }
        cout<<count<<endl;
    }
}

