#include <stdio.h>

void printAllNumbers(int lowerLimit, int upperLimit);

int main()
{
    int lowerLimit=1, upperLimit;
    printf("Enter Last limit: ");
    scanf("%d", &upperLimit);
    printf("All numbers from %d to %d are: ", lowerLimit, upperLimit);
    printAllNumbers(lowerLimit, upperLimit);
    return 0;
}

void printAllNumbers(int lowerLimit, int upperLimit)
{
    if(lowerLimit > upperLimit)
        return;
    printf("%d, ", lowerLimit);
    printAllNumbers(lowerLimit + 1, upperLimit);
}
