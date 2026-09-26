#include <stdio.h>
int main()
{
    FILE *fp;
    int ch;

    int count = 0;

    fp = fopen("data.txt", "r");

    while ((ch = fgetc(fp) != EOF))
    {
        count++;
    }
    printf("Total characters = %d", count);

    fclose(fp);
}
/*
3. Count characters in a file

Read a file named data.txt and count the total number of characters in it.
*/