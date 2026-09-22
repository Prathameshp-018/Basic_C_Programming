#include<stdio.h>
int main(){
    int arr[100];
    int n;

    printf("Enter the Limit of Array ");
    scanf("%d",&n);

    
    printf("Enter the element \n");

    for(int i=0;i<n;i++){ /*this loop for taking element*/
        scanf("%d",&arr[i]);
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            count++;
        }
    }
    printf("Even number = %d\n",count);
}