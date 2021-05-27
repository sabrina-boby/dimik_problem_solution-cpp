#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        int n,m,flag=1,i=0,j,k;
        cin>>a>>b;
        n=a.length();
        m=b.length();

        while(flag)
        {
            j=i;
            c="";
            k=0;
            while(k!=m)
            {
                c=c+a[j];
                k++;
                j++;
                if(c==b)
                {
                    flag=0;
                    break;
                }
            }
            i++;
        }
        cout<<i-1<<endl;
    }
}


/*  while(flag)
    {
        j=i;
        c="";
        while(m+i>j)
        {
            c = c + a[j];//gar-b a n //a n a
            if(c==b)
            {
                flag=0;
                break;
            }
            j++;
        }
        i++;
    }
    cout<<i-1<<endl;
*/
