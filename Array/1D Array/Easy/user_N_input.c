#include<stdio.h>
int main(){
    
    int n,i;
    int sum=0;

    printf("Entre the limit ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter Elements %d\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        sum=sum+arr[i];
    }
    printf("\n");
    printf("sum is %d",sum);
    printf("\n");
}