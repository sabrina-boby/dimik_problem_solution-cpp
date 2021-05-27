#include<iostream>
using namespace std;

int factorial( int a, int b, int c, int i)
{
    if(a>=b)
    {
        cout<<"Case "<<i<<": "<<c<<" "<<b<<" "<<a<<endl;
    }
    else
    {
        cout<<"Case "<<i<<": "<<c<<" "<<a<<" "<<b<<endl;
    }
}

int main()
{
    int n,i,x,y,z;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>x>>y>>z;

        if(x<=y && x<=z)
        {
            factorial(y,z,x,i);
        }
        else if(y<=x && y<=z)
        {
            factorial(x,z,y,i);
        }
        else
        {
            factorial(x,y,z,i);
        }
    }
}
