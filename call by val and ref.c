#include <stdio.h>
void changeValue(int* address)
{
    *address = 345;
}
int main()
{
    int a= 34, b=56;
    printf("The value of a now %d\n",a);
    changeValue(&a);
    printf("The value of a now %d\n",a);
    
    
    return 0;
}