#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, sum = 0;
	printf("Enter a number range: ");
	scanf("%d", &a);

    printf(" These are the numbers that are not divisible by 3 in the number range: \n");

	for(b = 1; b <= a;b++)
    {
    if(b%3 != 0)
    printf("%4d", b);

    sum = sum + b;
    }
{
    printf("\n The sum is: %d\n", sum);
    return 0;
}

}
