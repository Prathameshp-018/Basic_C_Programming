/*
2. Copy one string into another

Take a string from the user and copy it into another string using strcpy().

Example:

Input: Programming
Output: Copied string = Programming
*/

#include<string.h>
#include<stdio.h>
int main(){
    char name[100];
    char copy[100];

    printf("Enter the Name :- ");
    gets(name);
    printf("Copied String = %s",strcpy(copy,name));
}