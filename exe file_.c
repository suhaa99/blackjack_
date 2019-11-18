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


int main(int argc, char *argv[]) {

	int i;
	
	for(i=0; i<52; i++){
		getCardNum(i);
		printf("%d %d\n", getCardNum(i), CardTray[i]);
	}
	
	
}
