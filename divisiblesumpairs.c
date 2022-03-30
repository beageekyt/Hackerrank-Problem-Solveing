#include<stdio.h>
int main()
{
    int n,k,i,j,sum,p=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum=a[i]+a[j];
            if(sum%k==0)
            p++;

        }
    }
    printf("%d",p);
    return 0;
}
    