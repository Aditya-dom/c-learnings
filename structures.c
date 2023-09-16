#include <stdio.h>
#include <string.h>
struct student
{
        int id;
        int marks;
        char fav_char;
        char name[34];
};

int main()
{   
    struct student aditya, ruchi, mahi;
    aditya.id = 1;
    ruchi.id = 2;
    mahi.id = 3;

    aditya.marks=573;
    ruchi.marks=550;
    mahi.marks=473;


    aditya.fav_char = 'p';
    ruchi.fav_char = 't';
    mahi.fav_char = 's';                       

    strcpy(aditya.name, "Aditya richest man on the earth");

    printf("Aditya got %d marks\n", aditya.marks);
    printf("Aditya's name is %s\n", aditya.name);
    //printf("ruchi got %d marks\n", ruchi.marks);
    //printf("mahi got %d marks\n", mahi.marks);
    return 0;

}