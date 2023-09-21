#include <stdio.h>

float calculate_sum(int n)
{
    float sum = 0.0;
    int i;
    for (i=1; i<=n; i++)
    {
        sum += 1.0/i;
    }


    return sum;
}