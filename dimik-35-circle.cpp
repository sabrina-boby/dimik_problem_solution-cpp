#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double xc,yc,r,x,y,o,o1,q,q1,s;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>xc>>yc;
        cin>>r;
        cin>>x>>y;
        o=(x-xc);
        o1=(y-yc);
        q=o*o;
        q1=o1*o1;
        s=sqrt(q+q1);
        if(s>r)
        {
            cout<<"The point is not inside the circle"<<endl;
        }
        else
        {
            cout<<"The point is inside the circle"<<endl;
        }
    }
}
