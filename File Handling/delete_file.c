#include<stdio.h>
int main(){
    if(remove("record.txt")==0){
        printf("File remove Succesfully");
    }else{
        printf("Error");
    }
}