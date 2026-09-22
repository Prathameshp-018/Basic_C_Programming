/*
Print only positive numbers

Take 6 numbers in an array and print only the positive numbers.

Example:

Input:  -2  5  -8  10  3  -1
Output: 5  10  3
*/
#include<stdio.h>
int main(){
    int arr[100];
    int n,i;

    printf("Enter the Limit of Array ");
    scanf("%d",&n);

    printf("Enter the Elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>0){
            printf("%d", arr[i]);
        }
    }
}