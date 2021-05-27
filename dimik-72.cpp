#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        float s,mul;
        cin>>a>>b>>c;

        if(a+b>=c && a+c>=b && b+c>=a)
        {
            s=(a+b+c)/(float)2;
            mul=sqrt(s*(s-a)*(s-b)*(s-c));
            cout<<fixed<<setprecision(2)<<mul<<endl;
        }
        else
        {
            cout<<"Oh, No!"<<endl;
        }
    }
}
