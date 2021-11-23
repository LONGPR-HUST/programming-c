#include <stdio.h>
void display();
int main()
{

    display();

    display();
}
void display()
{
    static int c;// bien static co gia tri mac dinh la 0 neu khong duoc khoi tao;
    c = 5;
    c += 5;

    printf("%d  ", c);
}