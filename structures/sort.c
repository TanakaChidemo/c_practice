#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 5
#define MAX_STRING_LENGTH 20

char ordered_str[MAX_STRINGS][MAX_STRING_LENGTH];
char str1[MAX_STRINGS][MAX_STRING_LENGTH] = {"Tanaka", "Zuva", "Luna", "Chidemo", "zuva"};

int main()
{
    // Copy the original array to ordered_str
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        strcpy(ordered_str[i], str1[i]);
    }

    // Sort the ordered_str array
    for (int i = 0; i < MAX_STRINGS - 1; i++)
    {
        for (int j = i + 1; j < MAX_STRINGS; j++)
        {
            if (strcmp(ordered_str[i], ordered_str[j]) > 0)
            {
                char temp[MAX_STRING_LENGTH];
                strcpy(temp, ordered_str[i]);
                strcpy(ordered_str[i], ordered_str[j]);
                strcpy(ordered_str[j], temp);
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < MAX_STRINGS; i++)
    {
        printf("%s\n", ordered_str[i]);
    }

    return 0;
}
