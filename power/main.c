#include "power.c"

int main()
{
    int base, exponent;
    printf("Enter the base number and exponent\n");
    scanf("%d %d", &base, &exponent);
    while (base < 0 || exponent < 0)
    {
        printf("Please enter positive integers for the base number and the exponent number.\n");
        scanf("%d %d", &base, &exponent);
    }
    printf("The result is %d\n", power(base, exponent));
}