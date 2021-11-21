#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int randintgenerator(int n)
{
    srand(time(NULL));
    printf("The object chosen by computer is %d:\n",rand()%n+1);
    
}
int decision(int player1,int player2)
{
    if(player1==1 & player2==2)
    {
        printf("********Player1 has won the game*********");
    }
    else if(player1==1 & player2==3)
    {
                printf("********Playe21 has won the game*********");

    }
    else if(player1==1 & player2==1)
    {
                printf("********Game has tie*********");

    }
    else if(player1==2 & player2==1)
    {
                printf("********player2 won the game*********");

    }
    else if(player1==2 & player2==2)
    {
                printf("********Game has tie*********");

    }
    else if(player1==2 & player2==3)
    {
                printf("********player2 has won*********");

    }
    else if(player1==3 & player2==3)
    {
                printf("********Game has tie*********");

    }
    else  if(player1==3 & player2==2)
    {
                printf("********player2 has won the game*********");

    }
    else(player1==3 & player2==1);
    {
                printf("********player1 has won*********");

    }
}
int main()
{
    int temp[3]={'p','r','s'},dict,playerobject,computerobject;
    int j;
    char player[15],computer;
    printf("********Welcome to rock,paper,scissors**********\n");
    printf("Please Enter your name before you begin the game:\n");
    scanf("%s",&player);
    printf("Please choose the given options:\n 1-Paper \n 2-Rock \n 3-Scissors\n");
    scanf("%d",&dict);
    playerobject=temp[dict-1];
    printf("The object choosen by player %s is %c:\n",player,playerobject);

    printf("It.s Computer turn now:\n");
    printf("Please choose the given options:\n 1-Paper \n 2-Rock \n 3-Scissors\n");
    dict=randintgenerator(3);
    computerobject=temp[dict-1];
    printf("The object choosen by computer is %c:\n",computerobject);
    decision(playerobject,computerobject);
    return 0;
}
