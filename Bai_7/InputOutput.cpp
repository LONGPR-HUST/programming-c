#include <stdio.h>
int main(){
    //Type int
    int a;
    printf("Nhap a = ");
    scanf("%d", &a);
    printf("Gia tri a = %d\n", a);
    printf("Gia tri dia chi cua bien a = %d\n", &a);
    //Type float
    float b;
    printf("Nhap b = ");
    scanf("%f", &b);
    printf("Gia tri b = %.2f\n", b);
    printf("Gia tri dia chi cua bien b = %d\n", &b);
    //Type char
    char c;
    printf("Nhap c = ");
    scanf("%d", &c);
    printf("Gia tri c = %c\n", c);
    printf("Gia tri dia chi cua bien c = %d\n", &c);
    //Nhap nhieu bien
    int e, f;
    printf("Nhap e va f :");
    scanf("%d%d", &e, &f);
    printf("Gia tri \"e\" = %d\nGia tri f = %d\n", e, f);
    //---------------------------------------------
    printf("a\bc\td\re");
}