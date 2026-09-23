/*
5. Concatenate two strings

Take two strings and join them using strcat().

Example:

Input 1: Hello
Input 2: World

Output: HelloWorld
*/
#include<stdio.h>
#include<string.h>
int main(){
    char fname[100];
    char lname[100];

    printf("Enter your First Name :- ");
    gets(fname);

    printf("Enter Your Last Name :- ");
    gets(lname);

    printf("%s ",strcat(fname, lname));
}