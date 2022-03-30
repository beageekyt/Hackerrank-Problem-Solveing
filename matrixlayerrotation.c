#include<stdio.h>
#include<math.h>
int main()
{
    long m,n,r,i,j,k,temp,ring,ro;
    scanf("%ld%ld%ld",&m,&n,&r);
    long a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%ld",&a[i][j]);
    }
    if(m<n)
    ring=m/2;
    else
    ring=n/2;
    for(i=0;i<ring;i++)
    {
        ro=r%(2*m+2*n-8*i-4);
        for(k=0;k<ro;k++)
        {
            for(j=i;j<n-i-1;j++)//top row
            {
                temp=a[i][j];
                a[i][j]=a[i][j+1];
                a[i][j+1]=temp;
            }
            for(j=i;j<m-i-1;j++)//right column
            {
                temp=a[j][n-i-1];
                a[j][n-i-1]=a[j+1][n-i-1];
                a[j+1][n-i-1]=temp;
            }
            for(j=n-i-1;j>i;j--)//down row
            {
                temp=a[m-i-1][j];
                a[m-i-1][j]=a[m-i-1][j-1];
                a[m-i-1][j-1]=temp;
            }
            for(j=m-i-1;j>i+1;j--)//left column
            {
                temp=a[j][i];
                a[j][i]=a[j-1][i];
                a[j-1][i]=temp;
            }
            
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        printf("%ld ",a[i][j]);
        printf("\n");
    }
    return 0;
}
