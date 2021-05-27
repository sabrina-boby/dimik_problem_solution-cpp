#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int n,i;
        cin>>a;
        n=a.length();
        for(i=0; i<n; i++)
        {
            if(a[i]=='L')
            {
                a[i]=a[i-1];
            }
            else if(a[i]=='R')
            {
                a[i]=a[i+1];
            }
        }
        cout<<a<<endl;
    }
}
