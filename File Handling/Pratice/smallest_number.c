#include <stdio.h>
int main()
{
    FILE *fp;

    fp = fopen("small_num.txt", "w");

    int num;
    int small;
    printf("Enter 5 numbers:- \n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        fprintf(fp, "%d\n", num);
    }
    fclose(fp);

    fp = fopen("small_num.txt", "r");

    if (fscanf(fp, "%d", &num) == 1)
    {
        small = num;
    }

    while (fscanf(fp, "%d", &num) == 1)
    {
        if (num < small)
        {
            small = num;
        }
    }
    fclose(fp);

    printf("the smallest number is : %d\n", small);
}

/*
Find the Smallest Number
Take 5 numbers from the user, save them into numbers.txt, then read the file back and find the smallest number.
*/