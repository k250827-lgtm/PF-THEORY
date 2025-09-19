#include <stdio.h>

int main()
{
    int c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0;
    int input;

    printf("Enter a number between 0-9 (any other input to stop): ");
    while (scanf("%d", &input) == 1)
    {
        if (input < 0 || input > 9)
            break;

        if (input == 0) c0++;
        else if (input == 1) c1++;
        else if (input == 2) c2++;
        else if (input == 3) c3++;
        else if (input == 4) c4++;
        else if (input == 5) c5++;
        else if (input == 6) c6++;
        else if (input == 7) c7++;
        else if (input == 8) c8++;
        else if (input == 9) c9++;

        printf("Enter a number between 0-9 (any other input to stop): ");
    }

    if (c0==0 && c1==0 && c2==0 && c3==0 && c4==0 && c5==0 && c6==0 && c7==0 && c8==0 && c9==0)
    {
        printf("No numbers were entered.\n");
        return 0;
    }

    printf("Number\tOccurrences\n");
    if (c0 > 0) printf("0\t%d\n", c0);
    if (c1 > 0) printf("1\t%d\n", c1);
    if (c2 > 0) printf("2\t%d\n", c2);
    if (c3 > 0) printf("3\t%d\n", c3);
    if (c4 > 0) printf("4\t%d\n", c4);
    if (c5 > 0) printf("5\t%d\n", c5);
    if (c6 > 0) printf("6\t%d\n", c6);
    if (c7 > 0) printf("7\t%d\n", c7);
    if (c8 > 0) printf("8\t%d\n", c8);
    if (c9 > 0) printf("9\t%d\n", c9);

    return 0;
}
