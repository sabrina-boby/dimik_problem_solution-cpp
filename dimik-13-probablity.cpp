#include<iostream>
using namespace std;
int main()
{
    int n,i,count=1,j,z;
    string a;
    cin>>n;
    getline(cin,a);
    for(i=0; i<n; i++)
    {
        getline(cin,a);
        count=1;
        j=0;
        while(a[j]!='\0')
        {
            if(a[j]==' ')
            {
                count++;
            }
            j++;
        }
        z=(count-1);
        if(z==0)
        {
            cout<<"1/"<<1<<endl;
        }
        else
        {
            cout<<"1/"<<count*z<<endl;
        }

    }
}
