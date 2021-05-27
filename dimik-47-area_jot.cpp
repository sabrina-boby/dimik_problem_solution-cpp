#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j,a[100],k;
        cin>>n;
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        cin>>m;
        k=m+n;
        for(j=n; j<k; j++)
        {
            cin>>a[j];
        }
        sort(a, a + k);
        cout<<a[0];
        for(i=1; i<k; i++)
        {
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
}
