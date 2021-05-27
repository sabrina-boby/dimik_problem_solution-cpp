#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0,i,count2=0;
    string a;
    cin>>n;
    getline(cin,a);
    while(n--)
    {
        getline(cin,a);

        while(a[count]!='\0')
        {
           count++;
        }
        for(i=0; i<count; i++)
        {
           if(a[i]==' ' && a[i+1]!=' ')
           {
               count2++;
           }
        }

        cout<<"Count = "<<count2+1<<endl;
        count2=0;
        count=0;
    }
}
