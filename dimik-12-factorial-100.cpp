#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int num,cnt=0;
        cin>>num;
        long long x=5;

        while(x<=num)
        {
            cnt=cnt+(num/x);
            x=x*5;
            //cout<<cnt<<" "<<x<<endl;
        }
        cout<<cnt<<endl;
    }
}

