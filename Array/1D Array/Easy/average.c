#include<stdio.h>
int main(){
    int size,i;
    float average;
    int sum=0;


    printf("Enter The Length of Array ");
    scanf("%d",&size);

    int arr[size];
    printf("Enter the elements ");

    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<size;i++){
        sum=sum+arr[i];
        
        
        
    }
    printf("Total Sum is %d\n",sum);
    
    average=sum/size;
    printf("Average is %f",average);

    
}