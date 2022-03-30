 #include<stdio.h>
int main()
{
    int n,k,i,max=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
        max=a[i];
    }
    int j=max-k;
    if(j<0)
    printf("0");
    else {
    printf("%d",j);
    }
return 0;
}
