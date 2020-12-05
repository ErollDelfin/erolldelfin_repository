#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double sum = 0.10;

    for(x=2; x <= 15; x++)
    {
        sum = sum + sum;
        printf("Total money for day %d is %.2f\n", x, sum);
    }
    return 0;
}
