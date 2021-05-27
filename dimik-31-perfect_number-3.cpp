#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x>=6)
        {
            cout<<6<<endl;
        }
        if(x>=28)
        {
            cout<<28<<endl;
        }
        if(x>=496)
        {
            cout<<496<<endl;
        }
        if(x>=8128)
        {
            cout<<8128<<endl;
        }
        if(x>=33550336)
        {
            cout<<33550336<<endl;
        }
        if(n!=0)
        {
            cout<<endl;
        }
    }
}
