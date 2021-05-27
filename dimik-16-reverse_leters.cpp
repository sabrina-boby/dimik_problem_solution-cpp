#include<iostream>
using namespace std;

string reverse(int start,int end,string a)
{
    int x,i,temp,index=0;
    x=(start+end)/2;

    for(i=start; i<=x; i++)
    {
        temp=a[end-index];
        a[end-index]=a[i];
        a[i]=temp;
        index++;
    }
    return a;
}


int main()
{
    string a,b;
    int count=0,j,n;
    cin>>n;

    getline(cin,a);
    while(n--)
    {
        getline(cin,a);
        count=0;
        while(a[count]!='\0')
        {
            count++;
        }

        int start=0,end;
        for(j=0; j<count; j++)
        {
            if(a[j]==' ')
            {
                end=j-1;
                a=reverse(start,end,a);
                start=j+1;
            }
            else if(j==(count-1))
            {
                start=end+2;
                end=count-1;
                a=reverse(start,end,a);
            }
        }
        cout<<a<<endl;
    }
}
