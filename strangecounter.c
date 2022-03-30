#include<stdio.h>
int main()
{
    long long int start=1,end=3,value=3,time;
    scanf("%lld",&time);
    while(1)
    {
        if(start<=time&&time<=end)
        {
            time=time-start;
            printf("%lld",value-time);
            break;
        }
        start=end+1;
        value=2*value;
        end=value+end;
    }
    return 0;
}
