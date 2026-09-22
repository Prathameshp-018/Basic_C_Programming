#include<stdio.h>
int main(){
    int arr[100],size,i,max;

    printf("Enter the size of array ");
    scanf("%d",&size);

    for ( i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("MAximum value \n%d",max);
    
}