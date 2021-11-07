#include <stdio.h>
void NhapMaTran(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("A[%d][%d] = ", i, j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
}
void XuatMaTran(int a[][100], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
}
int PhanTuLonNhat(int a[][100], int n, int m){
    int max = a[0][0];
    for(int i = 0; i <n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] > max){
                max = a[i][j];
            }
        }
    }
    return max;
}
int main(){
    int a[100][100];
    int n, m;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("Nhap m = ");
    scanf("%d", &m);
    printf("Nhap Ma Tran:\n");
    NhapMaTran(a, n, m);
    printf("Xuat Ma Tran:\n");
    XuatMaTran(a, n, m);
    printf("\nPhan tu lon nhat cua mang a la %d", PhanTuLonNhat(a, n, m));
}