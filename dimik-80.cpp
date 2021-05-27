#include<iostream>
using namespace std;
int main()
{
    int n,m,temp,count;
    while(scanf("%d%d",&n,&m))
    {
        count=0;
        if(n==0 && m==0)
        {
            break;
        }
        while(m!=0)
        {
            if(n<m)
            {
                temp=n;
                n=m;
                m=temp;
            }
            if(m!=0)
            {
                n=n%m;
                cout<<++count<<endl;
                //cout<<n<<" "<<m<<endl;
            }
        }
        if(count%2==0)
        {
            cout<<"Ollie wins"<<endl;
        }
        else
        {
            cout<<"Stan wins"<<endl;
        }
    }
}
