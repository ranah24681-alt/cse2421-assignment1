#include <stdio.h>

int main()
{
    int numbers[] = { 10, 11, 12, 13, 67 };
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int num = numbers[i];
        sum += num;
    }

    printf("Result of sum of array: %d\n", (sum));
    return 0;
}