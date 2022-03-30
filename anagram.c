#include<stdio.h>
#include<string.h>
void freq(char s[],int a[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    a[s[i]-'a']++;
}
int main()
{
    int i,j,q,l,n;
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
        char s1[10000];
        int a1[26]={0},a2[26]={0};
        scanf("%s",s1);
        l=strlen(s1);
        if(l%2!=0)
        {
            printf("-1\n");
        }
        else 
        { 
            n=l/2;
            char s2[n];
            int k,diff,ans=0;
            for(i=n,k=0;s1[i]!='\0';i++,k++)
            s2[k]=s1[i];
            s1[n]='\0';
            s2[n]='\0';
            freq(s1,a1);
            freq(s2,a2);
            for(i=0;i<26;i++)
            {
                diff=a2[i]-a1[i];
                if(diff>0)
                ans=ans+diff;
            }
            printf("%d\n",ans);
        }
    }
    return 0;
}
