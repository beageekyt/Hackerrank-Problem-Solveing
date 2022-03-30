#include<stdio.h>
int main()
{
    int i,j,k,s=0,temp,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0&&a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
            s++;
        }
        a[j+1]=temp;
    }
    printf("%d",s);
    return 0;
}
