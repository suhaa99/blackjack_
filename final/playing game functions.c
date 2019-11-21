#include <stdio.h>
#include <stdlib.h>

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
	

	do
	{
		printf("Input the number of players (MAX:5) : ");
		scanf("%d", &n_user);
		
		if((n_user<=0) || (n_user>5))
			printf("the number of players should be between 1 and 5\n");
			
	}while((n_user<=0) || (n_user>5));
	
	printf("\n --> card is mixed and put into the tray");
	
	return n_user;

}

//betting
int betDollar(void) {
	
	int n;		
		
	printf("------ BETTING STEP ------\n");
	
	do{
		printf("\t-> your betting (total: %d) : ", dollar[0]);
		scanf("%d", &bet[0]);
		
		if(bet[0]<0)
		{
			printf("\t->invalid input for betting %d\n", bet[0]);
		}
		else if(bet[0]>dollar[0])
		{
			printf("\t->you only have $%d! bet again\n", dollar[0]);
		}
		
	}while((bet[0]<0) || (bet[0]>dollar[0]));
	
	
	for(n=1; n<n_user; n++)
		{
			bet[n]=rand()%N_MAX_BET+1;
			printf("\t->player%d bets $%d (out of $%d)\n", n, bet[n], dollar[n]);
		}	
	printf("---------------------");					

	return dollar[N_MAX_USER];
	
}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();	//int cardhold[N_MAX_USER+1][N_MAX_CARDHOLD(10)];
										//cards that currently the players hold
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();
	
	return;
}

//print initial card status
void printCardInitialStatus(void) {
	
	int n;
	
	printf("\n\n-------- CARD OFFERING ------------\n");
	printf("--- server : X ");
	pullCard();
	printf("\n\t-> you       : ");
	pullCard(); pullCard();
	
	for(n=1; n<n_user; n++)
	{
		printf("\n\t-> player%d   : ", n);
		pullCard(); pullCard();
	}
}


int getAction(void) {
	
	int action;			//action that you choose
	
	printf("Action? (0 - go, others - stay) : ");
	scanf("%d", action);
	
	if(action == 0)
	{
	
	}
	else
	{

	}
	
}


void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}




