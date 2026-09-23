#include <stdio.h>
#include <string.h>

int main() {
    char fname[100];
    char lname[100];

    printf("Enter Your Name :- ");
    scanf("%s", fname);

    printf("Re-enter your Last Name :- ");
    scanf("%s", lname);

    // If strcmp returns 0, the two strings match!
    if (strcmp(fname, lname) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}