#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        char c[22],d[22];
        int i=0,j=0,p,q,flag=0;
        cin>>a;
        cin>>b;
        for(auto x: a)
        {
            c[i++]=x;
        }
        for(auto y: b)
        {
            d[j++]=y;
        }

        sort(c,c+i);
        sort(d,d+j);
        if(i!=j)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(i=0; i<j; i++)
            {
                if(c[i]!=d[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
