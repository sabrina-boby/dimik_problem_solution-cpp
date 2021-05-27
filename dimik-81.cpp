#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,i,count=0;
        float avg,ans;
        cin>>n;
        int a[n];

        for(i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        avg=(float)sum/n;
        for(i=0; i<n; i++)
        {
            if(avg<a[i])
            {
                count++;
            }
        }
        ans=(count*100)/(float)n;
        cout<<fixed<<setprecision(3)<<ans<<"%"<<endl;
    }
}
