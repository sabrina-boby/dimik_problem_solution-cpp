#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,c="";
    char y;
    int n,count=0;
    getline(cin,a);
    cin>>n;
    for(auto x: a)
    {
        count=0;
        if('a'<=x && x<='z')
        {
            x=x-32;
            count=1;
        }

        if('A'<=x && x<='Z' )
        {
            y=(x-n);
            if('A'>y)
            {
                y=y+26;
            }
            if(count==1)
            {
                y=y+32;
                c=c+y;
            }
            else
            {
                c=c+y;
            }
        }
        else
        {
            c=c+x;
        }
    }
    cout<<c<<endl;
}


