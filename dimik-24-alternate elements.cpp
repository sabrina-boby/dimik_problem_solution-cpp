#include<iostream>
using namespace std;
int main()
{
    int n,i,m;
    cin>>m;
    while(m--)
    {
        cin>>n;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cout<<a[0];
        for(i=2; i<n; i=i+2)
        {
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
}
