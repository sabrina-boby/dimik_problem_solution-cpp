#include<iostream>
using namespace std;
int main()
{
    unsigned long long int A,B,C,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>A>>B>>C;
        while(A<=B)
        {
            if(A%C==0)
            {
                cout<<A<<endl;
                A = A + C;
                continue;
            }
            A++;
        }
        cout<<endl;
    }
}


