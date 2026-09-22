#include<stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 numbers:- \n");

    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

}
/*
1. Print All Array Elements

Take 5 numbers from the user and print all elements.

Example:

Input: 10 20 30 40 50
Output: 10 20 30 40 50
*/