#include <stdio.h>
int main(){
    int num = 1;
    while (num <= 10)
    {
        if (num % 2 == 1){
            printf("\t%d", num);
        }
        num++;
    }
    
}