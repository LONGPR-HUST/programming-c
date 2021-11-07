#include <stdio.h>
int main(){
    for (int i = 0; i < 128; i++){
        //if (i==7) continue;
        printf("\n%5d%5c", i, i);
    }
}