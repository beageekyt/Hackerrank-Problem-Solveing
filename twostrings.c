#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    char s1[100001],s2[100001];
    while(n--)
    {flag=0;
        int a[26]={0};
        int b[26]={0};
        scanf("%s",s1);
        scanf("%s",s2);
        int l1,l2;
        l1=strlen(s1);
        l2=strlen(s2);
        for(i=0;i<l1;i++)
        a[s1[i]-'a']++;
        for(i=0;i<l2;i++)
        b[s2[i]-'a']++;
        for(i=0;i<26;i++)
        {
            if(a[i]!=0&&b[i]!=0)
            {
                flag=1;
                 break;
            }
        }
        if(flag==1)
        printf("YES\n");
        else {
        printf("NO\n");
        }
    }
    return 0;
}
