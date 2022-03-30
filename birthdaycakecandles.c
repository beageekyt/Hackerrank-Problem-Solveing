#include<stdio.h>
int main()
{
int i=0,h=0,n=0,f=0;
scanf("%d",&n);
int c[n];
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
}
h=c[0];
for(i=0;i<n;i++)
{
if(h<c[i])
h=c[i];
}
for(i=0;i<n;i++)
{
if(h==c[i])
f++;
}
printf("%d",f);
return 0;
}
