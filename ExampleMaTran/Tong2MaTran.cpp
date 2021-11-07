#include <stdio.h>
int main(){
    /*  
        Tính tổng của 2 ma trận cùng kích thước
    */
    int a[10][10], b[10][10], c[10][10], d[10][10];
    int i, j, m, n;
    printf("Nhap m = ");scanf("%d", &m);
    printf("Nhap n = ");scanf("%d", &n);
    printf("--------Nhap cac ma tran----------\n\n");
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\t\t");
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("\t\t");
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            int sum = 0;
            for(int k = 0; k < m; k++){
                sum = sum + a[i][k] * b[k][j];
            }
            d[i][j] = sum;
        }
    }
    printf("\nMa tran a:");
    for( i = 0; i < m; i++){
        printf("\n\n\t");
        for(j = 0; j < n; j++){
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nMa tran b:");
    for( i = 0; i < m; i++){
        printf("\n\n\t");
        for(j = 0; j < n; j++){
            printf("%d\t",b[i][j]);
        }
    }
    printf("\nMa tran sau khi cong:");
    for( i = 0; i < m; i++){
        printf("\n\n\t");
        for(j = 0; j < n; j++){
            printf("%d\t",c[i][j]);
        }
    }
    printf("\nMa tran sau khi nhan:");
    for( i = 0; i < m; i++){
        printf("\n\n\t");
        for(j = 0; j < n; j++){
            printf("%d\t",d[i][j]);
        }
    }
}