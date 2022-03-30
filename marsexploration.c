#include<stdio.h>
#include<string.h>
int main()
{
    int ans=0,i,j,n;
    char s[100],a[3]="SOS";
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i=i+3)
    {
        if(s[i]!=a[0])
        ans++;
        if(s[i+1]!=a[1])
        ans++;
        if(s[i+2]!=a[2])
        ans++;
    }
    printf("%d",ans);
    return 0;
}
