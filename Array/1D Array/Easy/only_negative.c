/*
12. Print only negative numbers

Take 6 numbers in an array and print only the negative numbers.

Example:

Input:  4  -7  2  -9  6  -1
Output: -7  -9  -1
*/
#include<stdio.h>
int main(){
    int arr[100];
    int n,i;

    printf("Enter Array Limit ");
    scanf("%d",&n);

    printf("Enter elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<1){
            printf("Negative only %d \n",arr[i]);
        }
    }
}