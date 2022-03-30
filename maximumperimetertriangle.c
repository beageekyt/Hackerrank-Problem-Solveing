#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    long long int a[n],result=0,p,s1,s2,s3,temp;
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(a[j]+a[k]>a[i]&&a[k]+a[i]>a[j]&&a[i]+a[j]>a[k])
                {
                    p=a[i]+a[j]+a[k];
                    if(result<=p)
                    {
                        result=p;
                        s1=i;
                        s2=j;
                        s3=k;
                    }

                }
            }

        }
    }
    if(result!=0)
    printf("%lld %lld %lld",a[s1],a[s2],a[s3]);
    else {
    printf("-1");
    }
    return 0;

}
