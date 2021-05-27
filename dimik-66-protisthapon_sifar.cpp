/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,c="",e,f;
    char y;
    int n,count=0,t,m;
    getline(cin,e);
    getline(cin,f);
    getline(cin,a);

    m=e[0]-f[0];

    cout<<"m = "<<m<<endl;
    for(auto x: a)
    {
        if(x<'a' || 'z'<x)
        {
            //cout<<"c = "<<c<<endl;
            c=c+x;
        }
        count=0;
        if('a'<=x && x<='z')
        {
            x=x-32;
            count=1;

            if('A'<=x && x<='Z' && m<0)
            {
                y=x-m;
                cout<<"y ==== "<<y<<endl;
                if('Z'<y)
                {
                    t=y-'Z';
                    y='A'+t;
                    //t='A'-y;
                    //y='Z'-t;
                }
                if(count==1)
                {
                    y=y+32;
                    c=c+y;
                }
            }
            if('A'<=x && x<='Z' && 0<m)
            {
                y=x+m;
                cout<<"y = "<<y<<endl;
                if('Z'<y)
                {
                    t=y-'Z';
                    y='A'+t;
                }
                if(count==1)
                {
                    y=y+32;
                    c=c+y;
                }
            }
        }
    }
    cout<<f<<endl;
    cout<<e<<endl;
    cout<<c<<endl;
}


*/









#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,c="",e,f;
    char y;
    int n,count=0,t,m;
    getline(cin,e);
    getline(cin,f);
    getline(cin,a);

    m=e[0]-f[0];

    if(m<0)
    {
        n=m-2*(m);
    }

    else
    {
        n=m;
    }
    cout<<n<<endl;
    for(auto x: a)
    {
        if(x<'a' || 'z'<x)
        {
            //cout<<"c = "<<c<<endl;
            c=c+x;
        }

        count=0;
        if('a'<=x && x<='z')
        {
            x=x-32;
            count=1;
            if('A'<=x && x<='Z')
            {
                y=x+n;
                if('Z'<y)
                {
                    t=y-'Z';
                    y='Z'-t;
                }
                if(count==1)
                {
                    y=y+32;
                    c=c+y;
                }
            }
        }
    }
    cout<<f<<endl;
    cout<<e<<endl;
    cout<<c<<endl;
}



