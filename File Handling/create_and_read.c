/*
Task 1:-
1.Create File
2. Write on File
*/
#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("student.txt","w");
    fprintf(fp,"Name: Prathamesh\n");
    fprintf(fp,"Address: A/p Sainik Takali\n");
    fprintf(fp,"Pincode: 416108");
    fclose(fp);
    printf("student record saved into file");
}