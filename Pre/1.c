#include<stdio.h>
int n, m;
int a[60][60];

int main(void)
{
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            scanf("%d", &a[i][j]);
    for(int i = n; i >= 1; i--)
        for(int j = m; j >= 1; j--)
        {
            if(a[i][j])
            printf("%d %d %d\n", i, j, a[i][j]);
        }
    return 0;
}