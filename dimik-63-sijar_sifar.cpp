/*#include<bits/stdc++.h>
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
            y=(x+n);
            if('Z'<y)
            {
                y=y-26;
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
*/




#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b="";
    char k;
    int n,y;
    getline(cin,a);
    cin>>n;


    for(auto x: a)
    {
        if(97<=x && x<=122)
        {
            y=(x+n);
            k=y;
            if(122<y)
            {
                y=y-26;
                k=y;
            }
            b=b+k;
        }
        else if(65<=x && x<=90)
        {
            y=(x+n);
            k=y;
            if(90<y)
            {
                y=y-26;
                k=y;
            }
            b=b+k;
        }
        else
        {
            b=b+x;
        }
    }
    cout<<b<<endl;
}


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,c="",b;
    char y,v;
    int n,count=0;
    getline(cin,a);
    cin>>n;

    for(auto x: a)
    {
        v=x+n;
        if('z'>=x && x>='a')
        {
            if ((int)v>122)
                v=v-122+96;

        }
        else if ('Z'>=x && x>='A')
        {
            if ((int)v>90)
                v=v-90+64;
        }
        b=b+v;

    }
    cout<<b;
}


*/



