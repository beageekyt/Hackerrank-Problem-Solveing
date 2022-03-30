#include<stdio.h>
int main()
{
    int n,i,j,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int b=a[n-1];
    for(i=n-1;i>=0;i--)
    {
        if(a[i-1]>b)
        {
            a[i]=a[i-1];
        }
        else 
        {
            a[i]=b;
            f=1;
        }
        for(j=0;j<n;j++)
        printf("%d ",a[j]);
        printf("\n");
        if(f==1)
        break;
    }
    return 0;
}
