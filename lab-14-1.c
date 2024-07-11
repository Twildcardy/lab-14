#include <stdio.h>

int main()
{
    int N;
    printf("Please enter the value of N (1 ≤ N ≤ 1000): ");
    scanf("%d", &N);

    int count = 0;
    for (int A = 1; A < 500; A++)
    {
        for (int B = 1; B < A; B++)
        {
            if (A*A -B*B == N)
            {
                count++;
            }
        }
    }

    printf("The number of pairs of A and B satisfying the hint condition is: %d\n", count);
    return 0;
}