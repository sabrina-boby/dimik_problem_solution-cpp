#include<iostream>
using namespace std;
int main()
{
    int i,count=0;
    for(i=1000; i>=1; i--)
    {
        count++;
        cout<<i<<"\t";
        if(count%5==0)
        {
            cout<<endl;
        }
    }
}
