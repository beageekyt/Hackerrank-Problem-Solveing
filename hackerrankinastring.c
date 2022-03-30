#include<stdio.h>
int main()
{
    int i,j,q,f=0;
    char s[10000],a[10]="hackerrank";
    scanf("%d",&q);
    for(int k=0;k<q;k++)
    {f=0,j=0;
        scanf("%s",s);
        for(i=0;i<10;i++)
        {
            while(s[j]!='\0')
            {
                if(a[i]==s[j])
                {
                    f++;
                    j++;
                    break;
                }
                else
                j++;
            }
        }
        if(f==10)
        printf("YES\n");
        else
        printf("NO\n");
    }
    return 0;
}
