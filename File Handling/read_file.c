#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("first_file.txt","r");

    char str[200];

    while(fscanf(fp,"%s",str)!=EOF){
        printf("%s ",str);
    }
    fclose(fp);
}