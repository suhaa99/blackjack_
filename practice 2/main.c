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


//card processing functions ---------------

//calculate the actual card number in the blackjack game
int getCardNum(int cardnum) {
	
	int i;
	int num[52];
	
	for(i=0; i<52; i++)
	{
		num[i] = i;
		num[i] = cardnum;
	
	
		//put the actual number to the cardtray	
		if(cardnum % 13 == 0)
		{
			CardTray[i] = 1;
		}
		else if(cardnum % 13 == 1)
		{
			CardTray[i] = 2;
		}
		else if(cardnum % 13 == 2)
		{
			CardTray[i] = 3;
		}
		else if(cardnum % 13 == 3)
		{
			CardTray[i] = 4;
		}
		else if(cardnum % 13 == 4)
		{
			CardTray[i] = 5;
		}
		else if(cardnum % 13 == 5)
		{
			CardTray[i] = 6;
		}
		else if(cardnum % 13 == 6)
		{
			CardTray[i] = 7;
		}
		else if(cardnum % 13 == 7)
		{
			CardTray[i] = 8;
		}
		else if(cardnum % 13 == 8)
		{
			CardTray[i] = 9;
		}
		else
		{
			CardTray[i] = 10;
		}
	
	
	}
	
	return cardnum;
}


//print the card information (e.g. DiaA)
void printCard(int cardnum) {
		
	getCardNum(cardnum);

	//cardnum '0~12' : Dia
	if(cardnum / 13 == 0)
	{
		if(cardnum == 0)
		{
			printf("Dia A");
		}
		else if(cardnum == 10)
		{
			printf("Dia J");
		}
		else if(cardnum == 11)
		{
			printf("Dia K");
		}
		else if(cardnum == 12)
		{
			printf("Dia Q");
		}
		else
		{
			printf("Dia %d", CardTray[cardnum]);
		}
		
	}

	//cardnum '13~25' : Spd	
	if(cardnum / 13 == 1)
	{
		if(cardnum == 13)
		{
			printf("Spd A");
		}
		else if(cardnum == 23)
		{
			printf("Spd J");
		}
		else if(cardnum == 24)
		{
			printf("Spd K");
		}
		else if(cardnum == 25)
		{
			printf("Spd Q");
		}
		else
		{
			printf("Spd %d", CardTray[cardnum]);
		}
		
	}
	
	//cardnum '26~38' : Hrt
	if(cardnum / 13 == 2)
	{
		if(cardnum == 26)
		{
			printf("Hrt A");
		}
		else if(cardnum == 36)
		{
			printf("Hrt J");
		}
		else if(cardnum == 37)
		{
			printf("Hrt K");
		}
		else if(cardnum == 38)
		{
			printf("Hrt Q");
		}
		else
		{
			printf("Hrt %d", CardTray[cardnum]);
		}
	}
		
	//cardnum '39~51' : Clv
	if(cardnum / 13 == 3)
	{
		if(cardnum == 39)
		{
			printf("Clv A");
		}
		else if(cardnum == 49)
		{
			printf("Clv J");
		}
		else if(cardnum == 50)
		{
			printf("Clv K");
		}
		else if(cardnum == 51)
		{
			printf("Clv Q");
		}
		else
		{
			printf("Clv %d", CardTray[cardnum]);
		}
		
	}
	
	
	
	
}


//card array controllers -------------------------------

//mix the card sets and put in the array
int mixCardTray(void) {
	
	int cardnum;
	getCardNum(cardnum);
	
	cardnum = rand();
	
	return CardTray[cardnum];
}

//get one card from the tray
int pullCard(void) {
	
	
	
}


//playing game functions -----------------------------

//player settiing
int configUser(void) {
	
}


//betting
int betDollar(void) {
	
}


//offering initial 2 cards
void offerCards(void) {
	int i;
	//1. give two card for each players
	for (i=0;i<n_user+1;i++)
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
		
		printCardInitialStatus();
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
