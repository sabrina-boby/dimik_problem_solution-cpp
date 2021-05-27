#include<iostream>
using namespace std;
int main()
{

    int count=0,i,j,n;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        string a,b;
        cin>>a;

        count=a.length();
        for(i=count-1; i>=0; i--)
        {
            b=b+a[i];
        }
        if(a==b)
        {
            cout<<"Yes! It is Palindrome!"<<endl;
        }
        else
        {
            cout<<"Sorry! It is not Palindrome!"<<endl;
        }
    }
}

