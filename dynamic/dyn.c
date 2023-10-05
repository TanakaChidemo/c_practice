#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *fptr = (float *)malloc(sizeof(float) * 5);
    for (int i = 0; i < 5; i++)
    {
        *(fptr + i) = i;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Element %d of 5 is: %f.\n", i + 1, fptr[i]);
    }
    free(fptr);
    return 0;
}