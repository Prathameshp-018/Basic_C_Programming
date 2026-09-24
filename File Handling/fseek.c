#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("First_file.txt","w+");

    fputs("C Programming",fp);

    fseek(fp,4,SEEK_SET);

    fputs("session",fp);
    fclose(fp);
}