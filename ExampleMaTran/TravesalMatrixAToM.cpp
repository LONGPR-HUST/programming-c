#include <stdio.h>
void NhapMaTran(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t\t");
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void XuatMaTran(int a[100][100], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\t\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}
/*
    Nếu a[i][j] = 1 thì chuyển các phần tử ở hàng i cột j bằng 1;
*/
void DuyetMaTran(int a[][100], int n)
{
    int b[100][100], k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == 1)
            {
                for (k = 0; k < n; k++)
                {
                    b[i][k] = 1;
                    b[k][j] = 1;
                }
                 
            }
            else
            {
                if (a[i][j] == b[i][j])
                {
                    b[i][j] = 0;
                }
            }
           
        }
    }
    XuatMaTran(b, n);
}
int main()
{
    int a[100][100], n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap ma tran\n");
    NhapMaTran(a, n);
    printf("\nXuat Ma Tran");
    XuatMaTran(a, n);
    printf("\nDuyet ma tran");
    DuyetMaTran(a, n);
}