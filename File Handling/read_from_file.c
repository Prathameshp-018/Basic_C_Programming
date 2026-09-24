/*
TASK2
Read From Filles
*/
#include<stdio.h>
int main(){
    FILE *fp;
    char data[200];
    fp=fopen("student.txt","r");

    while (fgets(data,sizeof(data), fp))
    {
        printf("%s",data);
    }
    fclose(fp);
    
}