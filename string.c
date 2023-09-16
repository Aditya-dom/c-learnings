#include <stdio.h>
void printstr(char str[])
{
    int i=0;
    while (str[i]!='\0')

    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");   
}
int main()
{
    //char str[]={'A','d','i','t','y','a','\0'};
    //char str[6]="harry";
    char str[34];
    gets(str);
    printf("using custom function printstr\n");
    //printstr(str);
    printf("using printf %s\n",str);
    printf("using puts:\n");
    puts(str);
    return 0;
}