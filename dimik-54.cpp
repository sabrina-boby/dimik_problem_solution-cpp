#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        long long int m,n,mul=1,mul2=1,z1,z2;
        cin>>a;
        cin>>b;
        for(auto x: a)
        {
            m=x;
            mul=mul*m;
            mul=mul%97;
            cout<<"mul= "<<mul<<endl;
        }

        for(auto y: b)
        {
            m=y;
            mul2=mul2*m;
            mul2=mul2%97;
            cout<<"mul2= "<<mul2<<endl;
        }

        if(mul==mul2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}




