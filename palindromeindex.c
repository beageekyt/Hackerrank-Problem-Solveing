#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k,f=0;
    scanf("%d",&n);
    char s[100005];
    for(k=0;k<n;k++)
    {f=0;
        scanf("%s",s);
        int len=strlen(s);
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(s[i]!=s[j])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            if(s[j]==s[i+1]&&s[j-1]==s[i+2])
            printf("%d\n",i);
            else
            printf("%d\n",j);            
        }
        else
        printf("-1\n");
    }
    return 0;
}
