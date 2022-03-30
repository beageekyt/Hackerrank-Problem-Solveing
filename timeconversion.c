#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    gets(s);
    if(s[8]=='A')
    {
        if(s[0]=='1'&&s[1]=='2')
        {
            s[0]=s[1]='0';
        }
    }
    else 
    {
        if(!(s[0]=='1'&&s[1]=='2'))
        {
            if(s[0]<'8')
            s[0]=s[0]+1;
            else {
            s[0]=s[0]+2;
            }
            s[1]=((s[1]-46)%10)+48;
        }
    }
    s[8]='\0';
    puts(s);
    return 0;
}
