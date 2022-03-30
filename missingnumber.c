#include<stdio.h>
int main()
{
    long int i,j,k,temp,n,m,c[10000]={0},max=0,min;
    scanf("%ld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%ld",&temp);
        c[temp]--;
    }
    scanf("%ld",&m);
    for(i=0;i<m;i++)
    {
        scanf("%ld",&temp);
        c[temp]++;
        if(max<temp)
        max=temp;
    }
    min=max-100;
    if(min<0)
    min=0;
    for(i=min;i<=max;i++)
    {
        if(c[i]>0)
        printf("%ld ",i);
    }
    return 0;
}
