#include<stdio.h>
int main()
{
    int n,k,i;
    scanf("%d%d",&n,&k);
    int b[k];
    for(i=0;i<k;i++)
    b[i]=0;
    for(i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        b[a%k]++;
    }
    int max;
    for(i=0;i<=k/2;i++)
    {
        if(i==0)
        {
            if(b[i]>0)
            max++;
        }
        else if(i==k-i)
        {
            if(b[i]>0)
            max++;
        }
        else {
        if(b[i]>b[k-i])
        max+=b[i];
        else {
        max+=b[k-i];
        }
        }
    }
    printf("%d",max);
    return 0;

}
