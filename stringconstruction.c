#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        char s[100001];
        int a[26]={0},ans=0;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        a[s[i]-'a']=1;
        for(i=0;i<26;i++)
        {
            if(a[i]==1)
            ans++;
        }        
        printf("%d\n",ans);

    }
    return 0;
}
