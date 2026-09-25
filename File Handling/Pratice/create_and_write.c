/*
1. Create and write to a file

Create a file named data.txt and write the following text into it:

Hello, I am learning C.
This is file handling.
*/
#include<stdio.h>
int main(){
    FILE *fp;

    fp=fopen("data.txt","w");

    fprintf(fp,"Hello, i am Learning C. \nThis is file handling.");

    fclose(fp);  

}