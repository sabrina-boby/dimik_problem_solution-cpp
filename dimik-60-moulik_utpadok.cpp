#include<bits/stdc++.h>
#include<cmath>

using namespace std;
int main()
{
    unsigned long long int i,j,n,flage=1,k,x,w;
    cin>>n;
    unsigned long long int a[n]= {0};
    x=sqrt(n);

    for(i=2; i<=x; i++)
    {
        if(a[i]==0)
        {
            for(j=2; i*j<=n; j++)
            {
                a[i*j]=1;
                //cout<<i<<"*"<<j<<"   "<<i*j<<" = "<<a[i*j]<<endl;
            }
        }
    }

    vector<int>g1;
    for(i=1; i<=n; i++)
    {
        if(a[i]==0)
        {
            //cout<<i<<" = "<<"prime"<<endl;
            g1.push_back(i);
        }
    }

    for(i=0; i<g1.size(); i++)
    {
        cout<<i<<" = "<<g1[i]<<endl;
    }

    vector<int>::iterator it;
    int ser=19;
    it=find(g1.begin(),g1.end(),ser);
    if(it!=g1.end())
    {
        cout<<"element is = "<<ser<<endl;
        cout<<"position is = "<<it-g1.begin()<<endl;
    }
    else
    {
        cout<<"not found"<<endl;
    }




    /* i=1;
     while(flage)
     {
         i++;
         //cout<<"kolagash"<<endl;
         if(a[i]==0 && n%i==0)
         {
             //cout<<i<<" = "<<a[i]<<endl;
             n=n/i;
             cout<<i<<endl;
             if(a[n]==a[i])
             {
                 cout<<n<<endl;
                 flage=0;
                 break;
             }
         }
     } */
}









/*


for(i=2; i<n; i++)
    {
        if(a[i]==0)
        {
             //cout<<i<<" = "<<a[i]<<endl;
             if(n%i==0)
             {
                 n=n/i;
                 cout<<i<<endl;
                 if(a[n]==a[i])
                 {
                     cout<<n<<endl;
                 }
             }
        }
    }


*/
