#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long n,m,s;
        scanf("%lld%lld%lld",&n,&m,&s);
        long long result=((m+s-1)%n);
        if(result==0)
        result=n;
        printf("%lld\n",result);
    }
}
