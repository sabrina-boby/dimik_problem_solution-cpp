#include<iostream>
using namespace std;
int main()
{
    int count=1,n;
    float x;
    cin>>n;
    while(n--)
    {
        count=1;
        cin>>x;
        while(x/2>=1)
        {
            x=x/2;
            count++;
        }
        cout<<count<<" days"<<endl;
    }
}
