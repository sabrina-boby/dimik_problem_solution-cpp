#include<iostream>
using namespace std;
int main()
{
    int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==0)
        {
            cout<<1<<endl;
        }
        else
        {
            for(i=n; i>1; i--)
            {
                cout<<2<<"^"<<i<<" + ";
            }
            cout<<2<<" + "<<1<<endl;
        }
    }
}
