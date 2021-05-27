#include<iostream>
using namespace std;
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        for(int i=5;i<=n;i=i*5)
        {
            k=k+(n/i);
        }
        cout<<k<<endl;
    }

    return 0;
}


