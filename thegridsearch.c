#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,j,k,l,m,x,y,f=0,r1,r2,c1,c2;
    scanf("%d",&t);
    for(k=0;k<t;k++)
    {
        scanf("%d%d",&r1,&c1);
        char g[r1][c1];
        for(i=0;i<r1;i++)
        scanf("%s",g[i]);
        scanf("%d%d",&r2,&c2);
        char p[r2][c2];
        for(i=0;i<r2;i++)
        scanf("%s",p[i]);
        for(i=0;i<=r1-r2;i++)
        {
            for(j=0;j<=c1-c2;j++)
            {
                if(g[i][j]==p[0][0])
                {
                    for(l=0,x=i;l<r2;l++,x++)
                    {
                        for(m=0,y=j;m<c2;m++,y++)
                        {
                            if(g[x][y]==p[l][m])
                            f=1;
                            else
                            {
                                f=0;
                                break;
                            }
                        }
                        if(f==0)
                        break;
                    }
                }
                if(f==1)
                break;
            }
            if(f==1)
            break;
        }
        if(f==1)
        printf("YES\n");
        else
        printf("NO\n");
        f=0;      
    }
    return 0;
}
