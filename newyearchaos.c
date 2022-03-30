#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int f, T, tmp, i, j, k, ans, c;
    scanf("%d", &T);
    for (int a0 = 0; a0 < T; a0++)
    {
        int n;
        ans = c = f = 0;
        scanf("%d", &n);
        int *q = malloc(sizeof(int) * n);
        for (int q_i = 0; q_i < n; q_i++)
        {
            scanf("%d", &q[q_i]);
        }
        for (i = 0; i < n - 1; i++)
        {

            for (j = i + 1; q[i] > q[j] && j < n; j++)
            {
                ans++;
                c++;
                // printf("i=%d,ans=%d,c=%d\n",i,ans,c);

                if (c > 2)
                {
                    f = 1;
                    break;
                }
            }
            c = 0;
            if (f == 1)
                break;
        }
        if (f == 1)
            printf("Too chaotic\n");
        else
        {
            ans = 0;
            for (i = 1; i < n; i++)
            {
                k = q[i];
                for (j = i - 1; j >= 0 && k < q[j]; j--)
                {
                    q[j + 1] = q[j];
                    ans++;
                }
                q[j + 1] = k;
            }
            printf("%d\n", ans);
        }
    }
    return 0;
}
