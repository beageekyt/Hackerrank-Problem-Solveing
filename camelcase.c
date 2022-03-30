#include<stdio.h>
#include<string.h>
int main()
{
    char s[100000];
    int words=0;
    gets(s);
    for(int i=0;s[i]!='\0';i++)
    if(s[i]>=65&&s[i]<=90)
    words++;
    printf("%d",words+1);
    return 0;
}
