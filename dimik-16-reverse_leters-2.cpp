#include<iostream>
using namespace std;

string reverse_word(string a,int start,int end)
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
    string a;
    int i,n,count=0,start,end;

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

        start=0;
        for(i=0; i<count; i++)
        {
            if(a[i]==' ')
            {
                end=i-1;
                a=reverse_word(a,start,end);
                start=i+1;
            }
            else if(i==count-1)
            {
                start=end+2;
                end=count-1;
                a=reverse_word(a,start,end);
            }
        }
        cout<<a<<endl;
    }
}
