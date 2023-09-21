#include "sumSeries.c"

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    while(n<=0){
        printf("Please enter a positive integer.\n");
        scanf("%d", &n);
    }
    printf("n is equal to %d", n);
    printf("Sum of the series up to %d terms is %.5f\n", n, calculate_sum(n));
}