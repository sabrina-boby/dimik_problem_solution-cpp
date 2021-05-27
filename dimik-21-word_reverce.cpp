#include<iostream>
using namespace std;

int main()
{
    string a;
    int i,n,count=0,temp,x;

    cin>>n;
    getline(cin,a);
    while(n--)
    {
        getline(cin,a);
        count=0;
        while(a[count]!='\0')
        {
            count++;
        }
        x=(count/2);
        for(i=0; i<x; i++)
        {
            temp=a[count-i-1];
            a[count-i-1]=a[i];
            a[i]=temp;
        }

        cout<<a<<endl;
    }
}

