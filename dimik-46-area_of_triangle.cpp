#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double a,b,c;
        double ans,p;
        cin>>a>>b>>c;

        p=(a+b+c)/2;
        ans=sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<"Area = "<<fixed<<setprecision(3)<<ans<<endl;
    }
}
