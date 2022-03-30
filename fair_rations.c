#include<stdio.h>
int main()
{
    int n,i,bread=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        if(a[i]%2!=0)
        {
            a[i]=a[i]+1;
            a[i+1]=a[i+1]+1;
            bread=bread+2;
        }
    }
    if(a[n-1]%2!=0)
    printf("NO");
    else {
    printf("%d",bread);
    }
    return 0;
}
