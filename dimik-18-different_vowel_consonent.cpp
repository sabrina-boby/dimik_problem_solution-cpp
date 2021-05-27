#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a;
    cin>>n;

    getline(cin,a);
    while(n--)
    {
        getline(cin,a);
        string b,d;
        for(auto x: a)
        {
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            {
                b=b+x;
            }
            else if(x!=' ' && x>='a' && x<='z' || x>='A' && x<='Z')
            {
                d=d+x;
            }
        }
        cout<<b<<endl<<d<<endl;
    }
}
