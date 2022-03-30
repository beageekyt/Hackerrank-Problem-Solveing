#include <stdio.h>
#include <math.h>
int main()
{
long long int p,q,i,k,j,count=0,s=0,count1=0,l,b,d,c,h;
scanf("%lld%lld",&p,&q);
for(i=p;i<=q;i++)
{count=0;
count1=0;
j=i;
while(j!=0){
j=j/10;
count++;
}
l=i*i;
c=l;
for(k=0;k<count;k++){
c=c/10;

}
d=pow(10,count);
b=l%d;

if(c+b==i){
printf("%lld ",i);
s=1;
}
}
if(s==0)
printf("INVALID RANGE");


}
