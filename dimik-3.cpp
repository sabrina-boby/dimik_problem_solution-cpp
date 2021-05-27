#include<iostream>
using namespace std;
int main()
{
    int i,index=0;

    for(i=1000; i>=1; i--)
    {
        cout<<i<<'\t';
        index = index + 1;

        if(index % 5 ==0)
        {
            cout<<endl;
        }

    }
}
