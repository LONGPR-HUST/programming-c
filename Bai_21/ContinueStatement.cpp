/*
    In các số chẵn từ 1 đến 100 sử dụng continue

*/
#include <stdio.h>
int main(){
    for (int i = 0; i <= 100; i++){
        if (i % 2 != 0){
            continue;// bỏ qua các câu lệnh phía sau bên trong vòng lặp và nhảy đến giá trị tiếp theo của biến lặp
        }
        printf("%4d", i);
    }
}