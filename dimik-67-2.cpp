#include<iostream>
using namespace std;
int find_febonacci(int a[],int size,int i);
void fibonacci(int n)
{
    int a[1002],i,size=1;
    a[0]=0;
    a[1]=1;
    for(i=2; i<=n; i++)
    {
        size=find_febonacci(a,size,i);
    }
    cout<<a[n]<<endl;
}
int find_febonacci(int a[],int size,int i)
{
    int l,store,carry=0;
    for(l=i; l<i+size; l++)
    {
        store=a[l-2]+a[l-1]+carry;
        //cout<<"store = "<<store<<endl;
        a[l]=store%10;
        //cout<<a[l]<<endl;
        carry=store/10;
    }

    while(carry)
    {
        a[i+size]=carry%10;
        carry=carry/10;
        size++;
    }
    return size;
}
int main()
{
    int n;
    cin>>n;
    fibonacci(n);
}
