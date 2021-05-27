#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,i,j,t;
    float y,sum=0,x=1;
    cin>>t;
    while(t--)
    {
        sum=0;
        x=1;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            x=1;
            for(j=1; j<=i; j++)
            {
                x=x*j;
            }
            y=i/x;
            //cout<<"i = "<<i<<"     x = "<<x<<"    y = "<<y<<endl;
            sum=sum+y;
        }
        cout<<fixed<<setprecision(4)<<sum<<endl;
    }
}

