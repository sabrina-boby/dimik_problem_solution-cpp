#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,n,a;
    float ans;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        cin>>a;
        ans=sqrt(a);

        if(ceil(ans)==ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}



