#include<iostream>
using namespace std;
int main()
{
    int p,q,c,t,i,temp;
    cin>>t;
    while(t--)
    {
        temp=1;
        cin>>p>>q>>c;
        for(i=1; i<=q; i++)
        {
            temp=(temp*p)%c;
        }
        cout<<"Result = "<<temp<<endl;
    }
}
