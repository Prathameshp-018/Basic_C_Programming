#include<stdio.h>
struct student // these structure name and inside that are members
{
    int roll;
    char *name;
    float marks; // Where the we can define structure, in there we can't initalize value
};

int main(){
    struct student s1={21,"Prathamesh",55.5}; //here we make reference of student structure is "s1",through these s1 we can insert values into a variables or we can say inser values into the memebers.

    //s1.roll=21; s1.name="Prathamesh"; s1.marks=89.9; //using .(dot Operater)we can access structures Members).

    printf("Roll No %d\n",s1.roll);
    printf("Name :- %s\n",s1.name);
    printf("Marks :- %f\n",s1.marks);

    return 0;
    

}

/*
There 2 way to assign values to the member:-

1)struct student s1;

s1.roll=21; s1.name="Prathamesh"; //declare seperately


2)struct student s1={21,"Prathamesh",55.5}; //declare in {} brackets

*/