#include <stdio.h>

void selector(int arr[], int n)
{
    int i, j, min;

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int nums[] = {2, 5, 23, 45, 32, 56, 8, 1};
    int k = sizeof(nums) / sizeof(nums[0]);
    selector(nums, k);
    printf("The elements of the array are: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d\t", nums[i]);
    }
    printf("\n");
    return 0;
}