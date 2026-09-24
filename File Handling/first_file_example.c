#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("First_file.txt","w");
    fprintf(fp, "Hello i am created the first file using file handing");
    fclose(fp);

    

    
}