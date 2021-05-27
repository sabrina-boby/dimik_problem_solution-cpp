#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long int n,i,sum=0,t,x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=1;
        x=sqrt(n);
        for(i=1; i<=x; i++)
        {
            if(n%i==0)
            {
                cout<<"i = "<<i<<endl;
                sum=sum+i;

            }
        }
        if(sum==n)
        {
            cout<<"YES, "<<n<<" is a perfect number!"<<endl;
        }
        else
        {
            cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
        }
    }
}
