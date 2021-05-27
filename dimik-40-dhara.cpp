#include<iostream>
using namespace std;
int main()
{
    int x,k,i,sum=1,y=1,t;
    cin>>t;
    while(t--)
    {
        sum=1;
        y=1;
        cin>>x>>k;
        for(i=1; i<=k; i++)
        {
            y=y*x;
            sum=sum+y;
        }
        cout<<"Result = "<<sum<<endl;
    }
}
