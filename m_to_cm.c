#include <stdio.h>

int main()
{
    int m;

    {
        printf("\nEnter a value in meters : ");
        scanf("%d", &m);
        while (m < 0)
        {
            printf("!!! WRONG INPUT !!!\nERROR : Length cannot be negetive. Please enter a positive value.");
            printf("\nEnter a value in meters : ");
            scanf("%d", &m);
        }

        printf("%d m is equal to %d cm.", m, m * 100);
    }
    return 0;
}
