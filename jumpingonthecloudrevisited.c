#include<stdio.h>
int main()
{
    int n,k,e=100,a[100],x,y,i;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    x=k;
    while(1)
    {
        y=k%n;
        if(y!=0)
        {
            if(a[y]==1)
            {
                e=e-3;
                k=k+x;
            }
            else {
            e=e-1;
            k=k+x;
            }
        }
        else
        {
            if(a[0]==0)
            {
                e=e-1;
                break;
            }
            else {
            e=e-3;
            break;
            }
        }

    }
    printf("%d",e);

    
}
