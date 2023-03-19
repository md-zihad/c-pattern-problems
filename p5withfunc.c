#include <stdio.h>

int Prime(int num)
{

    if (num < 2)
    {
        return 0;
    }
    else
    {

        int x = num / 2;
        for (int i = 2; i <= x; i++)
        {
            if (num % i == 0)
            {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    int a = 1;

    while (a <= 100)
    {
        if (Prime(a))
        {
            printf("%d ", a);
        };
        a++;
    }
    return 0;
};