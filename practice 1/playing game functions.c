#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_CARDSET			1
#define N_CARD				52
#define N_DOLLAR			50


#define N_MAX_CARDNUM		13
#define N_MAX_USER			5
#define N_MAX_CARDHOLD		10
#define N_MAX_GO			17
#define N_MAX_BET			5

#define N_MIN_ENDCARD		30


//card tray object
int CardTray[N_CARDSET*N_CARD];
int cardIndex = 0;							


//player info
int dollar[N_MAX_USER];						//dollars that each player has
int n_user;									//number of users


//play yard information
int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD];	//cards that currently the players hold
int cardSum[N_MAX_USER];					//sum of the cards
int bet[N_MAX_USER];						//current betting 
int gameEnd = 0; 							//game end flag


//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
	int n_user;
	int *n;
	
	n=&n_user;
	
	printf("Input the number of players (MAX : 5) : %d", n_user+1);
	scanf("%d", &(n_user+1));

}


//betting
int betDollar(void) {
	
	int bet;
	int configUser;
	int dollar=0;
	
	printf("-------BETTING STEP--------\n  -> your betting(total : $ %d) : %d\n", bet, **);		//** ���� ���� 
	scanf("%d", &bet);
	
	for(n=1; n=N; n++)
	{
		printf("  ->player %d bets $ %d (out of $ %d)", n, {rand()%5+1}, **);					//** ���� �ϵ� 
	}

	
}

