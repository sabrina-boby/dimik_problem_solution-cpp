#include<iostream>
using namespace std;
int main()
{
    int n,i,a[25],j,temp,b[25],count=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }

    for(i=0; i<n-2; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(b[i]!=a[i])
        {
            count=1;
            break;
        }
    }
    if(count==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
