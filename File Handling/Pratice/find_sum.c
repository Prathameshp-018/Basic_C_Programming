#include <stdio.h>

int main()
{
    int num, sum = 0;
    FILE *fp;

    fp = fopen("numbers.txt", "w");
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    fp = fopen("numbers.txt", "r");
    while (fscanf(fp, "%d", &num) == 1)
    {
        sum += num;
    }
    fclose(fp);

    printf("Sum = %d\n", sum);
    return 0;
}
/*
Write multiple numbers and find their sum

Take 5 numbers from the user, write them into numbers.txt, then read the numbers from the file and calculate their sum.
*/