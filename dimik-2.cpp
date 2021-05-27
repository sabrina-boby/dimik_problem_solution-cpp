#include<iostream>
using namespace std;
int main()
{
    int count=0,n,i;
    string a;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a;
        while(a[count]!='\0')
        {
            count++;
        }

        int x=a[count-1] - '0';

        if(x%2==0)
        {
            cout<<"even"<<endl;
        }
        else
        {
            cout<<"odd"<<endl;
        }
    }
}
