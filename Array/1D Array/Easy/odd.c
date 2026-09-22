#include<stdio.h>
int main(){
    int arr[100];
    int n,i;

    printf("Enter the Limit of Array ");
    scanf("%d",&n);

    printf("Enter Elements \n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;

    for(i=0;i<n;i++){
        if(i%2!=0){
            count++;
        }
    }
    printf("Odd number = %d",count);
}