#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        int i,k,flag=1;
        cin>>n;
        if(n==1)
        {
            cout<<n<<" is not a prime"<<endl;
        }
        else if(n==2 || n==3)
        {
            cout<<n<<" is a prime"<<endl;
        }
        else
        {
            k=sqrt(n);
            for(i=2; i<=k; i++)
            {
                if(n%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<n<<" is not a prime"<<endl;
            }
            else
            {
                cout<<n<<" is a prime"<<endl;
            }
        }
    }
}
