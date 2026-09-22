/*
2. Find Sum of Array Elements

Take N numbers and calculate their total sum.

Input: 5
10 20 30 40 50

Output: 150
*/

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    printf("Sum = %d", sum);

    return 0;
}