#include <stdio.h>

int main()
{
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("All the numbers from %d to 1 are: \n",n);

    while(n>=1)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}
