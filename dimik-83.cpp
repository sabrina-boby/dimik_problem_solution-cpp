#include<iostream>
using namespace std;
int digit(int size,int b[],int p);

void find_power(int p,string a)
{
    int i=0,size=1,b[1105]= {0},x=0,j=0,l=0;
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
    while(carry)
    {
        b[size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        int p;
        cin>>a;
        if(a=="1")
        {
            cout<<"It's a power of 2"<<endl;
        }
        else
        {
            p=a.length();
            find_power(p,a);
        }
    }
}

/*
1942668892225729070919461906823518906642406839052139521251812410000000000000000000000
6582018229284824168619876730229402019930943462534319453394436096
1852673427797059126777135760139006525652319754650249024631321344000000000000000
*/

