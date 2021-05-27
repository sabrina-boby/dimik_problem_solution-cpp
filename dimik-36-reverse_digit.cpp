#include<iostream>
using namespace std;
int main()
{
    long long int n,i,k,j=0,l;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        j=0;
        while(n!=0)
        {
            k=n%10;//2 1 6
            j=j*10;
            j=j+k;
            n=n/10;//61 6 0
        }
        cout<<j<<endl;
    }
}







/*#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long int n,i,k,j=0,l;
    int t;
    string a="";
    cin>>t;
    while(t--)
    {
        cin>>n;
        j=0;
        string a="";
        while(n!=0)
        {
            k=n%10;//2 1 6
            n=n/10;//61 6 0
            a=a+to_string(k);
        }
        cout<<a<<endl;
    }
}
*/


/*
#include<iostream>
using namespace std;
int main()
{
    string a;
    long long int n,i,t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        n=a.size();
        for(i=n-1; i>=0; i--)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
}
*/

