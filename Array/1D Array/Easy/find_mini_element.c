#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50,60,70,80,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];

    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
        if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nMinimum element: %d\n",min);


}