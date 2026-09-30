#include<stdio.h>
int main(){
    int arr[]={5,10,15,20};
    int size=sizeof(arr)/sizeof(arr[0]);
    int search,found=0;

    printf("Enter the element of Array :- ");
    scanf("%d",&search);
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            printf("Element found at index %d\n",i);
            found=1;
            break;
        }
    }
    if(found==0){
        printf("Not Found\n");
    }
    
}