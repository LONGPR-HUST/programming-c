#include <stdio.h>
#include <math.h>
int main()
{
    int sumCount = 0;
    for (int num = 1; num < 1000; num++)
    {
        int count = 0;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % 2 == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("\t%d", num);
            sumCount++;
        }
    }
    printf("\nSumCount = %d", sumCount);
}
