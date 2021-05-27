#include<iostream>
using namespace std;
int main()
{
    int n,x,t,sum=0,l;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n;
        l=n;
        while(n!=0)
        {
            x=n%10;
            n=n/10;
            sum=sum+(x*x*x);
        }

        if(sum==l)
        {
            cout<<l<<" is an armstrong number!"<<endl;
        }
        else
        {
            cout<<l<<" is not an armstrong number!"<<endl;
        }
    }
}
