#include<iostream>
using namespace std;
int find_febonacci(int pst[],int pre[],int f[],int size,int l);
void fibonacci(int n)
{
    int pst[1002]= {0},pre[1002]= {0},f[1002]= {0},i,size=1,l;
    pst[0]=0;
    pre[0]=1;
    for(i=2; i<=n; i++)
    {
        size=find_febonacci(pst,pre,f,size,l=0);
    }
    for(i=0; i<size; i++)
    {
        cout<<f[i];
    }
}
int find_febonacci(int pst[],int pre[],int f[],int size,int l)
{
    int store,carry=0;
    for( ; l<size; l++)
    {
        store=pst[l]+pre[l]+carry;//11
        f[l]=store%10;//1
        carry=store/10;//1
        pst[l]=pre[l];//3
        pre[l]=f[l];//1
        cout<<"l = "<<l<<"  "<<pst[l]<<" "<<pre[l]<<endl;
    }

    while(carry)
    {
        f[l]=carry%10;
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

