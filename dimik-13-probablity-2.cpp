#include <stdio.h>
#include <string.h>

int main()
{
    int t,z,fac[11],x,y,a,ans;
    char c[300],h[10][25];
    scanf("%d",&t);
    fac[0]=1;
    for(int i=1;i<11;i++) {
        fac[i]=fac[i-1]*i;
    }
    while(t--) {
        scanf(" %[^\n]",c);
        z=strlen(c);
        int n[10]={1,1,1,1,1,1,1,1,1,1};
        x=0;
        y=0;
        for(int i=0;i<z;i++) {
            if(c[i]==32) {
                h[x][y]='\0';
                x++;
                y=0;
            }
            else {
                h[x][y]=c[i];
                y++;
            }
            if(i==(z-1) && c[i]!=32) {
                h[x][y]='\0';
            }
            if(i==(z-1) && c[i]==32) {
                x=x-1;
            }
        }
        a=0;
        for(int i=0;i<x+1;i++) {
            for(int j=i+1;j<x+1;j++) {
                if(strcmp(h[i],h[j])==0) {
                    n[i]+=1;
                    h[j][0]=(char)(a+65);
                    a++;
                }
            }
        }
        ans=fac[x+1];
        for(int i=0;i<(x+1);i++) {
            ans/=fac[n[i]];
        }
        printf("1/%d\n",ans);
    }
    return 0;
}
