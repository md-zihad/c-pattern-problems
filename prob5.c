#include <stdio.h>

int main()
{
    int i, j, Prime;

    for (i = 2; i <= 100; i++)
    {
        Prime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                Prime = 0;
                break;
            }
        }

        if (Prime)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
