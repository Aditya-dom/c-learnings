#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int ret()
{
    return 43 * 3;
}

int func1(int b1)
{
    static int myvar =  32; //ret(); //static it will take only constant literal and it will not accept function. 
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d", val);
    // printf("%d", loc);
    return 0;
}
