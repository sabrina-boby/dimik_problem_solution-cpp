#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    string a;
    cin>>n;
    getline(cin,a);
    while(n--)
    {
        getline(cin,a);

        for(auto x : a)
        {
            if(x==' ')
            {
                count++;
            }
        }
        cout<<"Count = "<<count+1<<endl;
        count=0;
    }
}
