#include <stdio.h>
#include <math.h>
void NhapMaTran(int a[100][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t\t");
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}
void XuatMaTran(int a[100][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        printf("\n\n\t");
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
    }
}
int TongCacHangChan(int a[100][100], int m, int n)
{
    int sc = 0;
    for (int i = 0; i < m; i += 2)
    {
        for (int j = 0; j < n; j++)
        {
            sc += a[i][j];
        }
    }
    return sc;
}
/*
    Tìm giá trị lớn nhất trên cột 2 của ma trận
*/
int GiaTriMaxCol1(int a[100][100], int m)
{
    int max = a[0][1];
    for (int i = 1; i < m; i++)
    {
        if (a[i][1] > max)
        {
            max = a[i][1];
        }
    }
    return max;
}
/*  
    Tìm giá trị lớn nhất nhỏ nhất trong ma trận
*/
int PhanTuLonNhat(int a[100][100], int m, int n)
{
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
/*
    Tổng các phần tử trên đường chéo chính của ma trận
*/
int TongDuongCheoChinh(int a[100][100], int m, int n)
{
    int sum = 0;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}
/*
    Ma trận chuyển vị của một ma trận vuông m = n
*/
void MaTranChuyenVi(int a[100][100], int m, int n)
{
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    XuatMaTran(a, m, n);
}
/*
  Sắp xếp hàng 2 theo chiều giá trị các phần tử giảm dần  

*/
void InsertDecrease(int a[100][100], int m, int n)
{
    int tg, k;
    for (int j = 0; j < n - 1; j++)
    {
        for (k = j + 1; k < n; k++)
        {
            if (a[1][j] < a[1][k])
            {
                tg = a[1][j];
                a[1][j] = a[1][k];
                a[1][k] = tg;
            }
        }
    }
    XuatMaTran(a, m, n);
}
/*
    Tổng các phần tử trong ma trận
*/
int TongPhanTu(int a[100][100], int m, int n)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}
/*
    Giá trị nhỏ nhất chia hết cho 3 trong ma trận
*/

void PhanTuMinChiaHetCho3(int a[][100], int m, int n)
{
    int min, kt;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 3 == 0)
            {
                min = a[i][j];
                kt = 1;
                break;
            }
        }
    }
    if (kt == 1)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] % 3 == 0 && a[i][j] < min)
                {
                    min = a[i][j];
                }
            }
        }
        printf("\n\nPhan tu nho nhat chia het cho 3 la %d ", min);
    }
    else
    {
        printf("\nKhong co phan tu nao chia het cho 3");
    }
}
/*
    Xóa một hàng
*/
void XoaHang(int a[][100], int m, int n, int r)
{
    for (int i = r; i < m - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }
    m--;
    XuatMaTran(a, m, n);
}
/*
    Xóa một cột thứ r;
*/
void XoaCot(int a[][100], int m, int n, int c)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = c; j < n - 1; j++)
        {
            a[i][j] = a[i][j + 1];
        }
    }
    n--;
    XuatMaTran(a, m, n);
}
/*
    Viết hàm liệt kê số nguyên tố có trong ma trận, đếm các số nguyên tố có trong ma trận
*/
//Kiểm tra xem soA có phải số nguyên tố không, đúng return true sai return false
bool SoNguyenTo(int soA)
{
    if (soA < 2)
    {
        return false;
    }
    else
    {
        for (int i = 2; i <= sqrt((float)soA); i++)
        {
            if (soA % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}
//Liệt kê số nguyên tố có trong ma trận
void LietKeSNT(int a[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (SoNguyenTo(a[i][j]))
            {
                printf("%d\t", a[i][j]);
            }
        }
    }
}
//Đếm số lượng số nguyên tố có trong ma trận
int DemSNT(int a[][100], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (SoNguyenTo(a[i][j]))
            {
                dem++;
            }
        }
    }
    return dem;
}

int main()
{
    int a[100][100];
    int m, n, r, c;
    printf("Nhap m = ");
    scanf("%d", &m);
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap r = ");
    scanf("%d", &r);
    printf("Nhap c = ");
    scanf("%d", &c);
    printf("--------Nhap cac phan tu cua ma tran-----------\n\n");
    NhapMaTran(a, m, n);
    printf("--------Xuat ma tran vua nhap----------");
    XuatMaTran(a, m, n);
    printf("\n\nTong cac hang chan cua ma tran la %d", TongCacHangChan(a, m, n));
    printf("\n\nGia tri max tren cot 1 la %d", GiaTriMaxCol1(a, m));
    printf("\n\nPhan tu lon nhat trong ma tran la %d", PhanTuLonNhat(a, m, n));
    printf("\n\nTong cac phan tu tren duong cheo chinh cua ma tran la %d", TongDuongCheoChinh(a, m, n));
    printf("\n\n--------Ma tran chuyen vi----------");
    MaTranChuyenVi(a, m, n);
    printf("\n\n------Ma tran sap xep theo chieu gia tri giam dan o hang 2------");
    InsertDecrease(a, m, n);
    printf("\n\nTong ca phan tu trong ma tran la %d", TongPhanTu(a, m, n));
    PhanTuMinChiaHetCho3(a, m, n);
    // printf("\n\nXoa mot hang trong ma tran");
    // XoaHang(a, m, n, r);
    // printf("\n\nXoa mot cot trong ma tran");
    // XoaCot(a, m, n, c);
    printf("\n\n----------Liet ke so nguyen to co trong ma tran-----\n");
    LietKeSNT(a, m, n);
    printf("\n\nSo luong so nguyen to co trong ma tran la : %d", DemSNT(a, m, n));
}