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
	
	int cards[4][13];			//total cards
	int HRT_A;
	int DIA_A;
	int SPD_A;
	int CLV_A;
	
	int HRT[13] = {	HRT_A, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };				//HEART cards
					
	int DIA[13] = {	DIA_A, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };				//DIA cards
					
	int SPD[13] = {	SPD_A, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };				//SPADE cards
					
	int CLV[13] = {	CLV_A, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10, 10, 10 };				//CLOVA cards					
	
		
	cards[0][13] = HRT[13];				
	cards[1][13] = DIA[13];				
	cards[2][13] = SPD[13];				
	cards[3][13] = CLV[13];					

	cards = cardnum;
	
	return cardnum;
}

//print the card information (e.g. DiaA)
void printCard(int cardnum) {
																	
	int getCardNum(int cardnum);
		
	int HRT[10] = HRT_J;
	int HRT[11] = HRT_Q;
	int HRT[12] = HRT_K;
	
	int DIA[10] = DIA_J;
	int DIA[11] = DIA_Q;
	int DIA[12] = DIA_K;
	
	int HRT[10] = HRT_J;
	int HRT[11] = HRT_Q;
	int HRT[12] = HRT_K;
	
	int HRT[10] = HRT_J;
	int HRT[11] = HRT_Q;
	int HRT[12] = HRT_K;
					

}

