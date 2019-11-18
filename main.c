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

int cards[4][13];
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


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	
	CardTray = 
	
	
	int A;
	

	if(cardSum[N_MAX_USER] <= 11)
		A = 11;	
	else
		A = 1;						//ace 1 or 11 code
	
	card = cardnum;
	
	return cardnum;
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
	
	int getCardNum(int cardnum);
	
	int n = cardnum;
	int i;
	
	if(n%13 == 1)
	{
		
	}
	

}


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	//int CardTray[N_CARDSET*N_CARD];		//int *ptr;	*ptr=CardTray[];
	//int n;	n= rand()
	int i;
	int *ptr;
	
	for(i=0; i<N_CARD; i++)
		{
			CardTray[N_CARDSET*N_CARD]=rand();	
		}									//mixing the card
		
	return CardTray[N_CARDSET*N_CARD];		//putting in the array
							
}

//get one card from the tray
int pullCard(void) {
	
	char getonecard;
	
	int mixCardTray;
	
	getonecard=rand();
}


//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
	int n_user;
	int *n;
	
	n=&n_user;
	
	printf("Input the number of players (MAX : 5) : %d", n_user);
	scanf("%d", &n_user);

}


//betting
int betDollar(void) {
	
	int bett;
	int configUser;
	int dollar=0;
	
	printf("-------BETTING STEP--------\n  -> your betting(total : $ %d) : %d\n", bet, **);		//** ���� ���� 
	scanf("%d", &bett);
	
	for(n=1; n=N; n++)
	{
		printf("  ->player %d bets $ %d (out of $ %d)", n, {rand()%5+1}, **);					//** ���� �ϵ� 
	}

	
}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<=n_user;i++)
	{
		cardhold[i][0] = pullCard();
		cardhold[i][1] = pullCard();
	}
	//2. give two card for the operator
	cardhold[n_user][0] = pullCard();
	cardhold[n_user][1] = pullCard();  	
	
	return;
}

//print initial card status
void printCardInitialStatus(void) {
	
}

int getAction(void) {
	
}


void printUserCardStatus(int user, int cardcnt) {
	int i;
	
	printf("   -> card : ");
	for (i=0;i<cardcnt;i++)
		printCard(cardhold[user][i]);
	printf("\t ::: ");
}




// calculate the card sum and see if : 1. under 21, 2. over 21, 3. blackjack
int calcStepResult() {
	
}

int checkResult() {
	
}

int checkWinner() {
	
}



int main(int argc, char *argv[]) {
	int roundIndex = 0;
	int max_user;
	int i;
	
	srand((unsigned)time(NULL));
	
	//set the number of players
	configUser();


	//Game initialization --------
	//1. players' dollar
	
	//2. card tray
	mixCardTray();



	//Game start --------
	do {
		
		betDollar();
		offerCards(); //1. give cards to all the players
		
		printCardInitialStatus(n_user+1, 2);
		printf("\n------------------ GAME start --------------------------\n");
		
		//each player's turn
		for () //each player
		{
			while () //do until the player dies or player says stop
			{
				//print current card status printUserCardStatus();
				//check the card status ::: calcStepResult()
				//GO? STOP? ::: getAction()
				//check if the turn ends or not
			}
		}
		
		//result
		checkResult();
	} while (gameEnd == 0);
	
	checkWinner();
	
	
	return 0;
}
