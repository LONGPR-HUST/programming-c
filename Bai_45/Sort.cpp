#include <stdio.h>
int main()
{
    int a[9] = {1, 9, 5, 16, 3, 10, 2, 6, 4};
    int tmp;
    for (int i = 0; i < 8; i++){
        for (int j = i + 1; j < 9; j++){
            // Chieu giam dan thi a[i] < a[j];
            // Chieu tang dan thi a[i] > a[j];
            if (a[i] < a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 9; i++){
        printf("%d \t", a[i]);
    }
}
