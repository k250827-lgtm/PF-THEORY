#include <stdio.h>

int main()
{
    int count[10] = {0};  
    int input;

    printf("Enter a number between 0-9 (any other input to stop): ");
    while (scanf("%d", &input) == 1)
    {
        if (input < 0 || input > 9)
            break;
        count[input]++;  
        printf("Enter a number between 0-9 (any other input to stop): ");
    }

    printf("Number\tOccurrences\n");
    int found = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] > 0)
        {
            printf("%d\t%d\n", i, count[i]);
            found = 1;
        }
    }

    if (!found)
        printf("No numbers were entered.\n");

    return 0;
}
