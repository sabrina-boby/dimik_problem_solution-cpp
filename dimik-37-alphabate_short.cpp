#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;
    char a[t][10000];
    char temp[10000];

    for(i=0; i<t; i++)
    {
        scanf("%s",&a[i]);
    }
    //cout<<"a = "<<a[i]<<endl;


    for(i=0; i<t; i++)
    {
        for(j=i+1; j<t; j++)
        {
            //cout<<a[i][0]<<endl;
           // cout<<a[j][0]<<endl;
            if(a[i][0]>a[j][0])
            {

                strcpy(temp,a[j]);
                strcpy(a[j],a[i]);
                strcpy(a[i],temp);
            }
        }
    }

    for(i=0; i<t; i++)
    {
        cout<<a[i]<<endl;
    }
}

