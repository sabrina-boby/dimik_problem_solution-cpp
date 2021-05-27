#include<iostream>
using namespace std;
int main()
{
    int n,i,m,k,l,sum=0,j;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>m;

        k=m/10000;
        l=m%10;


        sum=k+l;
        cout<<"Sum = "<<sum<<endl;
        sum=0;
    }
}
