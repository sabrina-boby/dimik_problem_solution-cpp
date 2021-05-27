#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,j=0,count=0;
    cin>>n;
    int a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    sum=sum/4;
    sort(a,a+n);

    for(i=n-1; i>=0; i--)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==sum)
            {
                a[i]=0;
                break;
            }
            else if(a[i]!=sum)
            {
                if(a[i]+a[j]==sum)
                {
                    a[i]=0;
                    a[j]=0;
                    break;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        if(a[i]!=0)
        {
            a[count++]=a[i];
        }
    }

    for(i=0; i<count; i++)
    {
        cout<<a[i]<<" ";
    }
}

///1 2 3 4 3 1 5 6 7
//1 1 2 3 3 4 5 6 7
///1 9 1 2 7 1 1 8 10
// 1 1 1 1 2 7 8 9 10
//1 1 1 1 1 1 7 8 9 10
//1 1 1 1 1 7 8
