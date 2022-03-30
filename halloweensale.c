#include<stdio.h>
int main()
{
    int p,d,m,s,g=0,sum=0;
    scanf("%d%d%d%d",&p,&d,&m,&s);
    while(1)
    {
        sum=sum+p;
        if(sum<=s)
        {
            g++;
            if(p-d>=m)
            {
                p=p-d;
            }
            else {
            p=m;
            }
        }
        else {
        break;
        }
    }
    printf("%d",g);
    return 0;
}
