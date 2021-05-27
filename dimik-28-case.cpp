#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;

    while(n--)
    {
        char a;
        cin>>a;

        if('A'<=a && a<='Z')
        {
            cout<<"Uppercase Character"<<endl;
        }
        else if('a'<=a && a<='z')
        {
            cout<<"Lowercase Character"<<endl;
        }
        else if('0'<=a && a<='9')
        {
            cout<<"Numerical Digit"<<endl;
        }
        else
        {
            cout<<"Special Character"<<endl;
        }
    }
}
