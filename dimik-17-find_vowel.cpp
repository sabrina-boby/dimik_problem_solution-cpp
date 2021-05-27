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
        for(auto x: a)
        {
            if (x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            {
                count++;
            }
        }
        cout<<"Number of vowels = "<<count<<endl;
        count=0;
    }
}
