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
        int n,m,i=0,j=0,store=0,t=0,count=0,x;
        scanf("%s",&a);
        scanf("%s",&b);

        n=strlen(a);
        m=strlen(b);
        x=m-1;
        for(i=0; i<n; i++)
        {
            t=i;
            for(j=0; j<m; j++)
            {
                if(a[t]==b[j])
                {
                    if(count==x)
                    {
                        store=t-x;
                        break;
                    }
                    count++;
                    t++;
                }
                else
                {
                    count=0;
                    break;
                }
            }
            if(store!=0)
            {
                break;
            }
        }
        cout<<store<<endl;
    }
}
//meemeeee emee
//meemeee meee


