#include <stdio.h>
#define YEU "\nHoc sinh yeu"
#define TB "\nHoc sinh trung binh"
#define KHA "\nHoc sinh kha"
#define GIOI "\nHoc sinh gioi"
int main()
{
    float diemToan;
    float diemVan;
    float diemAnh;
    printf("Nhap diem Toan = ");
    scanf("%f", &diemToan);
    printf("Nhap diem Van = ");
    scanf("%f", &diemVan);
    printf("Nhap diem Anh = ");
    scanf("%f", &diemAnh);
    float dtb;
    dtb = (diemToan + diemVan + diemAnh) / 3;
    printf("dtb = %.2f", dtb);
    if (dtb < 4)
    {
        printf(YEU);
    }
    else if (dtb < 6.5)
    {
        printf(TB);
    }
    else if (dtb < 8.0)
    {
        printf(KHA);
    }
    else
    {
        printf(GIOI);
    }
}