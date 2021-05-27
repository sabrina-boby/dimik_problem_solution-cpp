#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int x,i;
    string a;
    getline(cin,a);
    x=a.length();
    vector<char>b;
    for(i=0; i<x; i++)
    {
        b.push_back(a[i]);
    }

    for(i=x-1; i>=0; i--)
    {
        cout<<b[i];
    }
    cout<<endl;
}
