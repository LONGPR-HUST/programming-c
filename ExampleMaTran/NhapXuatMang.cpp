#include <stdio.h>

void NhapMaTran(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("A[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}
void XuatMaTran(int a[][100], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int a[100][100];
    int n, m;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap m = ");
    scanf("%d", &m);
    printf("Nhap ma tran:\n");
    NhapMaTran(a, n, m);
    XuatMaTran(a, n, m);
}
