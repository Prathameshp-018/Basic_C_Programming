/*
Search an Element
Take a number from the user and check whether it exists in the array.
Array: 10 20 30 40 50
Search: 30

Output: Element Found
*/
#include<stdio.h>
int main(){
    int marks[]={34,76,89,56,45};
    int search;
    int found=0;

    printf("Enter searching element :- ");
    scanf("%d",&search);

    for(int i=0;i<5;i++){
        if(marks[i]==search){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Element found it ");
    }else{
        printf("Not Elemnts not found it ");
    }
}