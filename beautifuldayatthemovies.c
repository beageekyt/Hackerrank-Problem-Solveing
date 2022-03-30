#include<stdio.h>
#include<math.h>
long int rev(long int x)
{
    long int i,sum=0,mult=10;
    while(x!=0)
    {
        i=x%10;
        sum=(sum*mult)+i;
        x=x/10;
    }
    return sum;
}
int main()
{
    long int i,j,k,result=0,x,r;
    scanf("%ld%ld%ld",&i,&j,&k);
    for(x=i;x<=j;x++)
    {
        r=rev(x);
        if(abs(x-r)%k==0)
        result++;
    }
    printf("%d",result);
    return 0;

}
