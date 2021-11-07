#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
//nhap ma tran
void Nhap(int a[100][100], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("\ta[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            //gotoxy(6+i,7+j);
        }
    }
}
//hien thi ma tran
void HienThi(int a[100][100], int n)
{
    int u, v;
    for (u = 0; u < n; u++)
    {
        printf("\n\n\t");
        for (v = 0; v < n; v++)
        {
            printf("\t  %d", a[u][v]);
        }
    }
}
//boi chung nho nhat
int BCNN(int m, int n)
{
    int a, b;
    a = m = abs(m);
    b = n = abs(n);
    while (m != n)
    {
        if (m > n)
            m = m - n;
        else
            n = n - m;
    }
    return (a * b) / m;
}
//chuyen ve ma tran tam giac
void MaTranTamGiac(int a[100][100], int n)
{
    int u, v, i;
    u = 0;
    int x, y, z;
    float w, e;
    while (u < n - 1)
    {
        v = u;
        while (v < n - 1)
        {
            i = u;
            z = BCNN(a[u][u], a[v + 1][u]);
            x = a[u][u] * (z / a[u][u]);
            y = a[v + 1][u] * (z / a[v + 1][u]);
            w = (float)z / a[u][u];
            e = (float)z / a[v + 1][u];
            if (x == y)
            {
                while (i < n)
                {
                    a[v + 1][i] = (int)(w * a[u][i] - e * a[v + 1][i]);
                    i++;
                }
            }
            else
            {
                while (i < n)
                {
                    a[v + 1][i] = (int)(w * a[u][i] + e * a[v + 1][i]);
                    i++;
                }
            }
            v++;
        }
        u++;
    }
}
//dinh thuc
int detA(int a[100][100], int n)
{
    int i, m = 1;
    for (i = 0; i < n; i++)
        m = m * a[i][i];
    return m;
}
int main()
{
    int a[100][100];
    int n;
    printf("\n - Nhap bac cua ma tran vuong: ");
    scanf("%d", &n);
    Nhap(a, n);
    printf("\n\n\t----- ma tran vua nhap la -----");
    HienThi(a, n);
    MaTranTamGiac(a, n);
    printf("\n\n\t----- ma tran tam giac -----");
    HienThi(a, n);
    printf("\n - detA = %d", detA(a, n));
    printf("\n\n\t\t");
    return 0;
}