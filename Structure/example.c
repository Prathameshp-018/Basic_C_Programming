#include<stdio.h>
struct emp{
    char name[10];
    int id;
}e1;
int main(){
    strcpy(e1.name,"Abcd");
    e1.id=101;

    printf("Name %s",e1.name);
    printf("\nid %d",e1.id);

}

/*
output:-
Name Abcd
id 101

*/