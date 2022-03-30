#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=2;i<=n;i=i+2)
    {
        if(a[i]==1)
        {
            p++;
            i--;
        }
        else {
        p++;
        }
    }
    printf("%d",p);
    return 0;
}
