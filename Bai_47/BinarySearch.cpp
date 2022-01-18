#include <stdio.h>
#include <math.h>
int BinarySearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1; // vi chi so mang >= 0
}
int main()
{
    int a[] = {1, 2, 3, 10, 12, 14};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 15;
    int result = BinarySearch(a, n, x);
    if (result != -1)
    {
        printf("%d co vi tri can tim la %d", x, result);
    }
    else
    {
        printf("%d khong tim thay trong mang", x);
    }
}