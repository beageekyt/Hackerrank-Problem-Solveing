#include<stdio.h>
#include<math.h>
int main()
{
    int a[100][100],i,j,p=0,q=0,n;
    scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          scanf("%d",&a[i][j]);
      }
  }
  for(i=0;i<n;i++)
  {
      p=p+a[i][i];
  }
  for(i=0;i<n;i++)
  q=q+a[i][n-1-i];
  printf("%d",abs(p-q));
}
