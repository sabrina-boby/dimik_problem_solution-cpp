#include<iostream>
using namespace std;
int main()
{
    long long int x,n,t,temp;

    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        temp=x;
        if(x>n)
        {
            cout<<"Invalid!"<<endl;
        }
        else
        {
            while(x<=n)
            {
                cout<<x<<endl;
                x+=temp;
            }
        }

        cout<<endl;
    }
}



/*
#include<iostream>
using namespace std;
int main()
{
    long long int x,n,t,temp;

    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        if(x<=n)
        {
            temp = x;

            while(x<=n)
            {
                cout<<x<<endl;
                x=x+temp;
            }
        }

        else
        {
            cout<<"Invalid!"<<endl;
        }
        cout<<endl;
    }
}
*/


