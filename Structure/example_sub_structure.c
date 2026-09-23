#include<stdio.h>

struct address
{
    char *city;
    int pincode;
};


struct student
{
    int roll;
    char *name;
    float Marks;

    struct address addr; //2nd structure & addr is the refrence of these 2nd structure.

};
int main() {
    struct student s1;

    s1.name="Prathamesh", s1.roll=23, s1.Marks=55.69;

    s1.addr.city="Pune", s1.addr.pincode=416108;


    printf("Name %s\n",s1.name);
    printf("Roll %d\n",s1.roll);
    printf("Marks %f\n",s1.Marks);

    printf("\n");
    printf("City %s\n",s1.addr.city);
    printf("Pincode %d\n",s1.addr.pincode);
    
}

/*
OutPut :-

Name Prathamesh
Roll 23
Marks 55.689999

City Pune
Pincode 416108

*/