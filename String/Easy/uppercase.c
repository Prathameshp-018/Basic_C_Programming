/*
2. Convert string to uppercase

Take a string and convert all characters into uppercase.

Example:

Input: hello world
Output: HELLO WORLD
*/

#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    printf("Enter the Name :- ");
    gets(name);
    printf("UpperCase name Can be :- %s",strupr(name));
}