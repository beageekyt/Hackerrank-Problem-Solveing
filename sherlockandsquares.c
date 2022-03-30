#include<stdio.h>
#include<math.h>
int main()
{
    int q,i,j,p=0;
    long long a,b;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%lld%lld",&a,&b);
        for(j=sqrt(a);j<=sqrt(b);j++)
        {
            if((j*j)>=a&&(j*j)<=b)
            p++;
        }
        printf("%d\n",p);
        p=0;
    }
    return 0;
}
