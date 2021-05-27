#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,y,z,i,n,o;
    float p,q,r,m;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x>>y>>z;
        p=300-z;
        q=(y*6)/p;

        if(x<y)
        {
            cout<<setprecision(2)<<setiosflags(ios::fixed)<<q<<" "<<0.00<<endl;
        }
        else
        {
            m=z/(float)6;
            o=(x-y)+1;
            r=(o/m);
            cout<<setprecision(2)<<setiosflags(ios::fixed)<<q<<" "<<r<<endl;
        }
    }
}

