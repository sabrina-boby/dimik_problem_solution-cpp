#include<iostream>
using namespace std;
int main()
{
    int n,m,i,j,k=1;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;
        cout<<"Case "<<k++<<":";
        for(j=1; j<=m; j++)
        {
            if(m%j==0)
            {
               cout<<" "<<j;
            }
        }
         cout<<endl;
    }
}
