#include<iostream>
using namespace std;
int main()
{
    int n,t,k=0,r=0,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        r=0;
        while(n!=0)
        {
            k=n%10;
            r=r*10;
            r=r+k;
            n=n/10;
        }
        cout<<r<<endl;
    }
}
