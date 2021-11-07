#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, sum;
    printf("\nNhap m = ");
    scanf("%d", &m);
    printf("\nNhap n = ");
    scanf("%d", &n);
    printf("\nNhap p = ");
    scanf("%d", &p);
    printf("Nhap ma tran a:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\t\t");
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Nhap ma tran b:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("\t\t");
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            sum = 0;
            for (k = 0; k < n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
        }
    }
    printf("\nTich cua 2 ma tran a va b");
    for (i = 0; i < m; i++)
    {
        printf("\n\t\t");
        for (j = 0; j < p; j++)
        {
            printf("%d\t", c[i][j]);
        }
    }
}