#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k=0,l=1,m;
        cin>>n;
        while(1)
        {
            l=l*5;
            if(l>n)
            {
                break;
            }
            m=n/l;
            k=k+m;
        }
        cout<<k<<endl;
    }
    return 0;
}
