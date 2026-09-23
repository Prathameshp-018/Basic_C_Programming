#include<stdio.h>

struct student 
{

    int roll;
    char name[20];
    float Marks;
};
int main(){
    struct student s1;

    printf("Enter Roll Number:- ");
    scanf("%d",&s1.roll);

    printf("Enter Name:- ");
    scanf("%s",s1.name);

    printf("Enter Marks:- ");
    scanf("%f",&s1.Marks);

    printf("\n");

    printf("Roll No:- %d\n",s1.roll);
    printf("Name:- %s\n",s1.name);
    printf("Marks:- %f\n",s1.Marks);

}

/*
OutPut:-

Enter Roll Number:- 12 //input
Enter Name:- pathu
Enter Marks:- 99.99

Roll No:- 12 //result
Name:- pathu
Marks:- 99.989998

*/