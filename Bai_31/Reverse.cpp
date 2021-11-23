#include <stdio.h>
int Reverse(int n){
    int reNum = n % 10; // Lay chu so cuoi cung
    n = n / 10; // Bo chu so cuoi cung
    int last;
    while (n > 0){
        last = n % 10;
        n /= 10;
        reNum = reNum * 10 + last;
    }
    return reNum;
}
int main(){
    int n;
    printf("Nhap so n = ");
    scanf("%d", &n);
    printf("So sau khi dao nguoc la: %d ", Reverse(n));

}