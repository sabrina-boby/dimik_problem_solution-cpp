#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,i,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        for(i=1; i<=c; i++)
        {
            if(i%a==0 && i%b==0)
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
