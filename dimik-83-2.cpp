/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n;
    cin>>i;
    while(i--)
    {
        cin>>n;
        string result = ((n&(n-1))==0) ? "It's a power of 2" : "Not a power of 2";
        cout<<result<<endl;
    }
    return 0;
}

*/

#include<iostream>
using namespace std;
int digit(int size,int b[],int p);

void find_power(int p,string a)
{
    int i,size=1,b[1105],x,j,l;
    b[0]=1;
    for(l=1; ; l++)
    {
        size=digit(size,b,p);

        if(size==p)
        {
            int flag=0;
            for(i=size-1,j=0; j<size; i--,j++)
            {
                x=a[j]-48;
                //cout<<x<<"     "<<i<<"= "<<b[i]<<endl;
                if(x!=b[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<"It's a power of 2"<<endl;
                break;
            }
        }
        else if(size>p)
        {
            cout<<"Not a power of 2"<<endl;
            break;
        }
    }
}
int digit(int size,int b[],int p)
{
    int l,store,carry=0,i;
    for(l=0; l<size; l++)
    {
        store=b[l]*2+carry;
        b[l]=store%10;
        carry=store/10;
    }
    //cout<<"carry = "<<carry<<endl;
    while(carry)
    {
        b[size]=carry%10;
        carry=carry/10;
        size++;
    }
    //cout<<"size--------"<<size<<endl;
    return size;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        string a;
        cin>>a;
        p=a.length();
        find_power(p,a);
    }
}


