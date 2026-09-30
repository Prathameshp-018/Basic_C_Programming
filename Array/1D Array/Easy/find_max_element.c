#include<stdio.h>
int main(){
    int arr[]={50,60,20,30,70,90,100,150,40,22};
    int size=sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);

        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("\nMaximum element is :- %d",max);
}