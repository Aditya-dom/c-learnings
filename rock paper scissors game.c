/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); //srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}
*/
//Create Rock, Paper & Scissors Game
// Player 1: rock
// Player 2 (computer): scissors -->player 1 gets 1 point

// rock vs scissors - rock wins
// paper vs scissors - scissors wins
// paper vs rock - paper wins
// Write a C program to allow user to play this game three times with computer. Log the scores of computer and the player. Display the name of the winner at the end
// Notes: You have to display name of the player during the game. Take users name as an input from the user.

/*
int main()
{
    printf("The random number between 0 to 5 is %d\n", generateRandomNumber(5));
    return 0;
}
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i=0;
    char name[100];
    static int win=0;
    static int drawn=0;
    static int loose=0;
    int n;
    printf("PAPER=0,ROCK=1,SCISSOR=2\n");

    printf("ENTER THE NAME OF YOU\n");
    scanf("%s",&name);
    while(i<3)
    {   
    srand(time(NULL));
    int s = rand()%3;
    printf("%s TURN\n", name);
    scanf("%d", &n);
    printf("%s:%d\n", name, n);
    printf("PLAYER 2 TURN\n");
    printf("COMPUTER:%d\n", s);

    if (n == s)
    {
        printf("MATCH DRAWN & GET 0 POINT\n");
        drawn++;

       
    }
    else if (n == 0 && s == 1 || n == 1 && s == 2 || n == 2 && s == 0)
    {
        printf("%s WIN THE GAME AND GET 1 POINT\n", name );
        win++;
    }
    else
    {
        printf("COMPUTER WIN THE GAME AND GET 1 point\n");
        loose++;
    }
    i++;
    }
    printf("\n\n");
    
    if (win==1 && drawn ==1 && loose==1 || drawn==3 )
    {
        printf("THIS GAME IS DRAWN SO PLEASE TRY AGAIN  ");
    }
    else if (win==2 || win==1 && drawn==2)
    {
        printf("CONGRATULATION, YOU WON HIS GAME WITH TOTAL POINT %d ",win);
    }
    else
    {
        printf("OOPS, YOU LOOSE THIS GAME PLEASE TRY AGAIN\n");
    }
    
    
    
    return 0;
}
