#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b,count=0,z,n;
    string a;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        getline(cin,a);

        for(auto x : a)
        {
            if(x>='A' && x<='Z')
            {
                z=x-64;
                cout<<z;
            }
            if(x>='a' && x<='z')
            {
                z=x-96;
                cout<<z;
            }

        }
        cout<<endl;
    }

}
