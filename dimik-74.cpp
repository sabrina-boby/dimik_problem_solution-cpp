#include<iostream>
#include <vector>
using namespace std;
int main()
{
    int m,n,i,l,j,count=0;
    cin>>m>>n;
    string a[m],k;
    unsigned long long int b[m];
    for(i=0; i<m; i++)
    {
        cin>>k;
        a[i]=k;
        cin>>l;
        b[i]=l;
    }
    while(n--)
    {
        int sum=0;
        string p;
        vector<string> g1;
        while(1)
        {
            cin>>p;
            if(p==".")
            {
                break;
            }
            else
            {
                g1.push_back(p);
            }
        }
        for(j=0; j<m; j++)
        {
            for (auto i = g1.begin(); i != g1.end(); i++)
            {
                if(a[j]==*i)
                {
                    sum=sum+b[j];
                }
            }
        }
        cout<<sum<<endl;
    }
}
