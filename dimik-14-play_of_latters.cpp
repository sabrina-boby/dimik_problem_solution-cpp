#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    string a;
    char b;
    int count=0,n;
    cin>>n;

    getline(cin,a);
    while(n--)
    {
        getline(cin,a);
        cin>>b;

        for(auto x: a)
        {
            if(x==b)
            {
                count++;
            }
        }
        if(count==0)
        cout<<"'"<<b<<"' is not present"<<endl;
        else
        cout<<"Occurrence of '"<<b<<"' in '"<<a<<"' = "<<count<<endl;
        count=0;
        getline(cin,a);
    }
}
