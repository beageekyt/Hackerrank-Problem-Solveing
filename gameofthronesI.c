#include<stdio.h>
void freq( char s[],int a[])
{
    for(int i=0;s[i]!='\0';i++)
    a[s[i]-'a']++;
}
int main()
{
    int i,j,k,f=1,a[26]={0};
    char s[100000];
    scanf("%s",s);
    freq(s,a);
    for(i=0;i<26;i++)
    {
        if(a[i]%2==1&&f==1)
        f=0;
        else if(f==0&&a[i]%2==1)
        {
            f=-1;
            break;
        }
    }
    if(f==-1)
    printf("NO");
    else {
    printf("YES");
    }
    return 0;
}
