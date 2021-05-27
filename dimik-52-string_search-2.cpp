#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[130],b[130];
        string c;
        int n,m,i=0,j=0,store=0,t=0,loop=0;
        scanf("%s",&a);
        scanf("%s",&b);

        n=strlen(a);
        m=strlen(b);

        for(i=0; i<n; i++)
        {
            t=i;
            for(j=0; j<m; j++)
            {
                if(a[t]==b[j])
                {
                    // cout<<t<<"="<<a[t]<<" "<<j<<"="<<b[j]<<endl;
                    loop++;
                    if(loop==m)
                    {
                        store++;
                        loop=0;
                        break;
                    }
                    t++;
                }
                else
                {
                    loop=0;
                    break;
                }
            }
        }
        cout<<store<<endl;
    }

}

