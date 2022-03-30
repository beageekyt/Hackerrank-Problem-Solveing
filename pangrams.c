#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],i,j;
    int k,f=0;
    gets(s);
    for(i='a',j='A';i<='z';i++,j++)
    {
        f=0;
        for(k=0;s[k]!='\0';k++)
        {
            if(s[k]==i||s[k]==j)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        break;
    }
    if(f==1)
    printf("pangram");
    else
    printf("not pangram");
    return 0;
}
