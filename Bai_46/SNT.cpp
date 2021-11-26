#include <stdio.h>
#include <math.h>

bool soNT(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int a[9] = {3, 5, 6, 9, 8, 7, 61, 51, 65};
    for (int i = 0; i < 9; i++){
        if (soNT(a[i]) == true){
            printf("%d\t", a[i]);
        }
    }
}