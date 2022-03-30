#include<stdio.h>
#include<string.h>
int main()
{
    int q,i,j,k,n,f=1;
    char s[10000];
    scanf("%d",&q);
    for(k=0;k<q;k++)
    {f=0;
        scanf("%s",s);
        n=strlen(s);
        for(i=0,j=n-1;i<n-1;i++,j--)
        {
            int a=abs(s[i]-s[i+1]);
            int b=abs(s[j]-s[j-1]);
            if(a==b)
            f=1;
            else
            {
                f=0;
                break;
            }
        }
        if(f==1)
        printf("Funny\n");
        else
        printf("Not Funny\n");
    }
    return 0;
}
