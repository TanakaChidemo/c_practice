#include<stdio.h>
int main() {
    int num, sq;
    printf("Please enter a positive integer: \n");
    scanf("%d", &num);
    while(num<=0) {
        printf("%d is not a positive integer. Please try again: ", num);
        scanf("%d", &num);
    }
    sq = num*num;
    printf("The square of %d is %d.", num, sq);
    return 0;
}