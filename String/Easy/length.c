/*
1. Find the length of a string

Take a string from the user and print its length.

Example:

Input: Prathamesh
Output: Length = 10
*/
#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter The Name:- ");
    gets(name);
    printf("Length of your Name is :- %d",strlen(name));
    
}