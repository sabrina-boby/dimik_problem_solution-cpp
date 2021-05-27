#include<iostream>
using namespace std;
int main()
{
    long long int n,m,i,x,k;
    long long int lcd,gcd;
    cin>>k;
    while(k--)
    {
        cin>>n>>m;
        if(n==0 || m==0)
        {
            cout<<"LCM = "<<0<<endl;
        }

        else
        {
            if(n>m)
            {
                x=m;
            }
            else
            {
                x=n;
            }
            for(i=x; i>=1; i--)
            {
                if(n%i==0 && m%i==0)
                {
                    gcd=i;
                    break;
                }
            }
           // cout<<"gcd = "<<gcd<<endl;
            //cout<<"(m*n) = "<<m*n<<endl;
            lcd=(m*n)/gcd;
            cout<<"LCM = "<<lcd<<endl;
        }
    }
}
