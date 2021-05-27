#include<iostream>
using namespace std;
int main()
{
    int n,a[1002],i,k;
    cin>>n;
    a[0]=1;
    a[1]=1;
    for(i=2; i<n; i++)
    {
        a[i]=a[i-1]+a[i-2];
        cout<<a[i]<<endl;
    }

}
