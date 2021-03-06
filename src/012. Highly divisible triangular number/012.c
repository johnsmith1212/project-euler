#include <stdio.h>
#include <math.h>

int numOfFactors(long long num);

int main()
{
    long long triangle = 0;
    int i = 1;
    while (1)
    {
        triangle += i;
        if (numOfFactors(triangle) > 500)
        {
            printf("%lld\n", triangle);
            break;
        }
        ++i;
    }
}

int numOfFactors(long long num)
{
    int count = 0;
    long factor = 1;
    while (factor <= sqrt((double)num))
    {
        if (num % factor == 0)
        {
            count += 1;
        }
        factor += 1;
    }
    if (factor * factor > num)
    {
        return count * 2;
    }
    else
    {
        return count * 2 + 1;
    }
}
