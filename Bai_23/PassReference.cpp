#include <stdio.h>

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Increment(int &n)
{
    n++;
}
int main()
{
    int first, second;
    printf("Nhap first = ");
    scanf("%d", &first);
    printf("Nhap second = ");
    scanf("%d", &second);
    printf("First = %d, Second = %d \n", first, second);
    Increment(first);
    Increment(second);
    Swap(first, second);
    printf("First = %d, Second = %d ", first, second);
}