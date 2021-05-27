#include <iostream>
using namespace std;

int i,j,k,a,b;
int gcd(int a, int b)
{
    if (b > a)
    {
        return gcd(b,a);
    }
    if (b == 0)
    {
        return 0;
    }
    if (a/b == 1)
    {
        return !gcd(b,a%b);
    }
    return 1;
}

int main()
{
    while (2 == scanf("%d%d",&a,&b) && a)
    {
        if (gcd(a,b)%2)
        {
            cout<<gcd(a,b)%2<<endl;
            cout<<"Stan wins"<<endl;
        }
        else
        {
            cout<<"Ollie wins"<<endl;
        }
    }
}
