#include<stdio.h>
int main()
{
    int i,j,k,n;
    scanf("%d",&k);
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
       { printf("%d",i);
        break;}
    }
    return 0;
}
