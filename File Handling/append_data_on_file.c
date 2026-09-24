#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("student.txt","a");

    fprintf(fp,"\nAttendences: 90%%");

    fclose(fp);
    printf("Data appended successfully");
}