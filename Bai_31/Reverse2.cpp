#include <stdio.h>
void Reverse(int n){
    bool first = true;
    int tmp;
    while (n > 0){
        tmp = n % 10;
        n /= 10;
        if (first == true){
            if (tmp != 0){
                printf("%d", tmp);
                first = false;
            }
        }else{
            printf("%d", tmp);
        }
    }
}
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);
    printf("So sau khi dao nguoc la : \n");
    Reverse(n);
}