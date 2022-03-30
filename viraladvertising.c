#include<stdio.h>
int main()
{
    int i,like=0,p=5,day,l;
    scanf("%d",&day);
    for(i=0;i<day;i++)
    {
        if(i!=0)
        {
            p=(p/2)*3;
        }
        l=p/2;
        like=like+l;

    }
    printf("%d",like);
    return 0;
}
