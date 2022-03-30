#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i,j,k,f=0,a[26],b[26]={0};
    char s[100000];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    b[s[i]-'a']++;
    for(i=0,k=0;i<26;i++)
    {
        if(b[i]!=0)
        {
            a[k]=b[i];
            k++;
        }
    }
    //for(i=0;i<k;i++)
  //  printf("%d  ",a[i]);

    for(i=1;i<k;i++)
    {
        if(abs(a[i]-a[i-1])==1||abs(a[i]-a[i-1])==0)
        {
            if(abs(a[i]-a[i-1])==1&&f==0)
            {
                f=1;
                if(a[i]-a[i-1]==1)
                a[i]--;
                else {
                a[i]++;
                }
                
            }
            else if(abs(a[i]-a[i-1])==1&&f==1)
            {
                f=-1;
                break;
            }
        }
        else if(a[i]==1)
        {
            f=1;
            a[i]--;
        }
        else if(a[i]!=0)
        {
            f=-1;
            break;
        }
    }
    if(f==-1)
    printf("NO");
    else
    printf("YES");
    return 0;
}
