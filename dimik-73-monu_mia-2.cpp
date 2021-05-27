#include<iostream>
using namespace std;
int main()
{
    int x,i=0,j,k=0;
    string a,b;
    getline(cin,a);
    x=a.length();

    for(j=x-1; j>=0; j--)
    {
        b[k]=a[j];
        k++;
    }


    for(i=0; i<x; i++)
    {
        cout<<b[i];
    }
    cout<<endl;
}

