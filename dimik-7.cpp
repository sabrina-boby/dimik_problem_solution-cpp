#include<iostream>
using namespace std;
int main()
{
    int n;
    string m;

    cin>>n;
    getline(cin,m);
    while(n--)
    {
        //scanf(" %[^\n]",m);
        getline(cin,m);

        result=1,count=0;

        while(m[count]!='\0')
        {
            if(m[count]==' ' && m[count+1]!=' ')
            {
                result++;
            }
            count++;
        }
        cout<<result<<endl;
    }
}
