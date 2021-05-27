#include<iostream>
using namespace std;
int main()
{
    int n,i,x,y,z;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y>>z;

        if(x<=y && x<=z)
        {
            cout<<"Case "<<i<<": "<<x<<" ";
            if(y>z)
            {
                cout<<z<<" ";
                cout<<y<<endl;
            }
            else
            {
                cout<<y<<" ";
                cout<<z<<endl;
            }
        }
        else if(y<=x && y<=z)
        {
            cout<<"Case "<<i<<": "<<y<<" ";
            if(x>z)
            {
                cout<<z<<" ";
                cout<<x<<endl;
            }
            else
            {
                cout<<x<<" ";
                cout<<z<<endl;
            }
        }
        else if(z<=x && z<=y)
        {
            cout<<"Case "<<i<<": "<<z<<" ";
            if(x>y)
            {
                cout<<y<<" ";
                cout<<x<<endl;
            }
            else
            {
                cout<<x<<" ";
                cout<<y<<endl;
            }
        }
    }
}
