#include <stdio.h>
#include <stdlib.h>

void foo(int n)
{
    static int a = 5;
    a += n;
    printf("%d ", a);
}

int main()
{
    int i;
    for (i = 1; i < 4; i++)
        foo(i);
    return 0;
}