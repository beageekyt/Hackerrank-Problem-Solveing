#include<stdio.h>
int main()
{
    int n,i,ans=0;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='0'&&a[i+1]=='1'&&a[i+2]=='0')
        {
            ans++;
            i=i+2;
        }
    }
    printf("%d",ans);
    return 0;
}
