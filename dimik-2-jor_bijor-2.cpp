#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        char x;
        int i,count=0,t;
        cin>>a;
        while(a[count]!='\0')
        {
            count++;
        }
        x=a[count-1];
        t=x-48;
        if(t%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
}
