  /*  Last Edited By: Kayla Fitzsimmons
   *  Course: CS162-400
   *  Date: 3/17/2015
   *  Created on: 3/15/2015
   *  Author: Kayla
   *  File: Game.cpp
   */
#include <stdio.h>      
#include <stdlib.h>     
#include <time.h>       
#include"Game.h"
#include"Player.h"
#include"Elixir.h"
#include"GoodElixirs.h"
#include"HarmfulElixirs.h"
#include"ChildChambers.h"

//has player object
//assign Elixirs colors
//assign Elixirs to chambers
//regenerate Elixir function

Game::Game(){
		srand (time(NULL));
		J = new HairChamber("Clinic J");
		I = new ArmChamber("Clinic I");
		H = new EyeChamber("Clinic H");
		G = new HairChamber("Clinic G");
		F = new ArmChamber("Clinic F"); 
		E = new EyeChamber("Clinic E");
		D = new HairChamber("Clinic D");
		C = new ArmChamber("Clinic C");
		B = new EyeChamber("Clinic B");	
		entranceA = new ArmChamber("Clinic A");
		player = new Player(GREEN, BLONDE, FOUR);
		
		entranceA->setChambers(C,C,C,C);
		B->setChambers(E,G,C,I);
		C->setChambers(F,D,B,J);
		D->setChambers(G,H,C,I);
		E->setChambers(H,F,J,B);
		F->setChambers(I,G,E,C);
		G->setChambers(J,B,F,D);
		H->setChambers(D,I,B,E);
		I-> setChambers(B,J,I,F);
		J->setChambers(C,E,I,G);
		
		setChamberElixirs(entranceA);
		setChamberElixirs(B);
		setChamberElixirs(C);
		setChamberElixirs(D);
		setChamberElixirs(E);
		setChamberElixirs(F);
		setChamberElixirs(G);
		setChamberElixirs(H);
		setChamberElixirs(I);
		setChamberElixirs(J);
		
}
/********************************
* void Game::setChamber(Chamber*)
* inside of a chamber there are three elixirs
* rolls dice and if result = 1 then create new winning potion
* if the result is a 10, then it is a losing potion
* if it is 2-5 then it is a helpful potion, if it is a 6-9 
* then it is a harmful potion
*******************************/
void Game::setChamberElixirs(Chamber* chamber){

	dice.setNumSides(14);
	int dice1, dice2, dice3;
	bool noneEqual = true;
		dice1 = dice.rollDice();
		dice2 = dice.rollDice();
		dice3 = dice.rollDice();

	do{
		noneEqual == true;
		
		if(dice1 == dice2)
		{
			dice2--;
			dice2--;
			if(dice2 <= 0)
			{
				dice2 = dice.rollDice();
			}
			noneEqual = false;
		}
		else if(dice2 == dice3)
		{
			dice3--;
			dice3--;
			if(dice3 <= 0)
			{
				dice3 = dice.rollDice();
			}
			noneEqual = false;
		}
		else if(dice3 == dice1)
		{
			dice1--;
			dice1--;
			if(dice1 <= 0){
			dice1 = dice.rollDice();
			}
			noneEqual = false;
		}
		else
			noneEqual = true;
		
	}while( noneEqual != true);

	chamber->setPosOne(setChamber(dice1));	
	chamber->setPosTwo(setChamber(dice2));
	chamber->setPosThree(setChamber(dice3));

	//std::cout << std::endl;
	//std::cout << chamber->getName() << std::endl;
	//std::cout << "Set Elixir One: "<< chamber->getPosOne()->getName() << std::endl;
	//std::cout << "Set Elixir Two: "<< chamber->getPosTwo()->getName() << std::endl;
	//std::cout << "Set Elixir Three: "<< chamber->getPosThree()->getName() << std::endl;
}
/*
 * Method Name  : introduction
 *
 * Synopsis     : void Game::introduction() 
 *
 * Description  : 
 * 
 */

void Game::introduction(){
	

		std::cout << std::endl;
		std::cout << "         ^^^^^  " << std::endl;
		std::cout << "       ([o]_[o])" << std::endl;
		std::cout << "      /|   |o__|\\ " << std::endl;
		std::cout << "      \\|   |o  |/ " << std::endl;
		std::cout << std::endl;
		std::cout <<  std::endl;
		std::cout << "  Good Afternoon, and welcome to the Elixir Clinical Trials!" << std::endl;
		std::cout << "  My name is Dr.OopsDruggdyah and I will be conducting the Experiments..." << std::endl;
		std::cout << "  Oh, um excuse me, I mean the Clinical Trials that you have so graciously\n  volunteered to complete!" << std::endl;
		std::cin.get();
		std::cout << "  As you are probably aware, this will be a double-blind Trial, so neither" << std::endl;
		std::cout << "  of us will really know exactly what it is you are taking!" << std::endl;
		std::cout << "  Isn't that exciting?!" << std::endl;
		std::cin.get();
		usleep(1000000);
		std::cout << "  . . . " << std::endl;
		std::cout << std::endl;
		std::cout << "  Hmm... Well, just so we are sure we have the right person\n  could you please fill out the following form?" << std::endl;
		getPatientInfo(); 
		system("clear");
	//	usleep(1000000);
		
		std::cout << std::endl;
		std::cout << "         ^^^^^  " << std::endl;
		std::cout << "       ([o]_[o])" << std::endl;
		std::cout << "      /|   |o__|\\ " << std::endl;
		std::cout << "      \\|   |o  |/ " << std::endl;
		std::cout << std::endl;
		std::cout <<  std::endl;
	
	std::cout << std::endl;
	std::cout << "  Ah yes you are the correct patient!" << std::endl;
	std::cout << "  Now take a good look at yourself before we begin," << std::endl;
	std::cout << "  I want you to be aware of any of the subtle effects " << std::endl;
	std::cout << "  the Elixirs might have on you. " << std::endl;
	player->displayDrawing();
	std::cout << std::endl;
	std::cout << std::endl;
	std::cin.get();
	std::cin.get();
	system("clear");
	scramble(); //scramble's player
	
		//	system("clear");
		std::cout << std::endl;
		std::cout << "         ^^^^^  " << std::endl;
		std::cout << "       ([o]_[o])" << std::endl;
		std::cout << "      /|   |o__|\\ " << std::endl;
		std::cout << "      \\|   |o  |/ " << std::endl;
		std::cout << std::endl;
		std::cout <<  std::endl;
	
	
	std::cout << "  Okay great! Well the first Elixir you are required to take" << std::endl;
	std::cout << "  is right here... there you go friend, was that so bad?" << std::endl;
	std::cout << std::endl;
	usleep(3000000);
	std::cout << " ... Something is happening!!" << std::endl;
	std::cin.get();
	//usleep(3000000);
	player->displayDrawing();
	std::cin.get();
	system("clear");
	std::cout << std::endl;
			std::cout << std::endl;
		std::cout << "         ^^^^^  " << std::endl;
		std::cout << "       ([o]_[o])" << std::endl;
		std::cout << "      /|   |o__|\\ " << std::endl;
		std::cout << "      \\|   |o  |/ " << std::endl;
		std::cout << std::endl;
		std::cout <<  std::endl;
	
	std::cout << "  	Well, uh I must say!? You look.. uh.. different!" << std::endl;
	std::cout << "  Hm... let's see, did I forget to tell you the other conditions" << std::endl;
	std::cout << "  of the study? Oh, yes I definitely missed something earlier... the " << std::endl;
	std::cout << "  only way you can undo any changes that might result from this Trial " << std::endl;
	std::cout << "  is to continue taking the Elixirs until you look... I mean feel normal " << std::endl;
	std::cout << "  again. As you could imagine, it would compromise the integrity of the " << std::endl;
	std::cout << "  trials if I were to step in at any point."<< std::endl;
	std::cout << "		We close at 12 for lunch so that gives you... 7 hours to try  " << std::endl;
	std::cout << "  to uh, resolve your predicament. The first clinic room is ahead, good luck!  " << std::endl;
	std::cout << "  Oh and also, the Trial gives out free sample Elixirs but you can only carry" << std::endl;
	std::cout << "  one at a time, and they cannot leave the study. If you would like another sample, " << std::endl;
	std::cout << "  you MUST CONSUME the Elixir you already have.  You know, for legal reasons..." << std::endl;
    std::cout << std::endl;
	std::cin.get();
	system("clear");
	player->displayDrawing();
}
/*
 * Method Name  : getPatientInfo
 *
 * Synopsis     : void Game::getPatientInfo() 
 *
 * Description  : 
 * 
 */
void Game::getPatientInfo(){

	int outOfRange;
	bool goodInput = true;
	//enum EYES {PURPLE, GREEN, BLUE, RD};
	//enum HAIR {PRPL, BLONDE, BLACK, RED};
	//enum ARMS{ONE,TWO,THREE,FOUR};
	EYES a;
	HAIR b;
	ARMS c;
	int eyes, hair, arms;
		
		
		
		do{
			try{
			std::cout << std::endl;
			std::cout << "                      PATIENT INFORAMTION								" << std::endl;
			std::cout << "  What color are your EYES?\n  (1)Purple (2)Green (3)Blue (4)Red: ";
			std::cin >> eyes;
			if(eyes < 1 || eyes > 4){
				throw outOfRange;
			}
			
			std::cout << "  What color is your HAIR?\n  (1)Purple (2)Blonde (3)Black (4)Red: ";
			std::cin >> hair;
			if(hair < 1 || hair > 4){
				throw outOfRange;
			}
			std::cout << "  And, how many ARMS do you have?\n  (1)One (2)Two (3)Three (4)Four: ";
			std::cin >> arms;
			if(arms < 1|| arms > 4){
				throw outOfRange;
			}
			
			goodInput = true; 	
		}
		catch(int){
			std::cin.clear();
			std::cin.ignore(1000,'\n');
			std::cout << " You must fill out the form correctly!" << std::endl;
			goodInput = false;
		}
		
	}while(goodInput != true);
	
	//enum EYES {PURPLE, GREEN, BLUE, RD};
	//enum HAIR {PRPL, BLONDE, BLACK, RED};
	//enum ARMS{ONE,TWO,THREE,FOUR};
	if(eyes == 1){	a = PURPLE;}
	if(eyes == 2){	a = GREEN;}		
	if(eyes == 3){	a = BLUE;}		
	if(eyes == 4){	a = RD;}	

	if(hair == 1){	b = PRPL;}
	if(hair == 2){	b = BLONDE;}		
	if(hair == 3){	b = BLACK;}		
	if(hair == 4){	b = RED;}	
	
	if(arms == 1){	c = ONE;}
	if(arms == 2){	c = TWO;}		
	if(arms == 3){	c = THREE;}		
	if(arms == 4){	c = FOUR;}	
	
	player->setPlayer(a,b,c);
	
}
/*
 * Method Name  : setChamber
 *
 * Synopsis     : Elixir* Game::setChamber(int diceRoll) 
 *
 * Arguments    : int  diceRoll : 
 *
 * Description  : 
 * 
 * Returns      : Elixir* 
 */

Elixir* Game::setChamber(int diceRoll){

	Elixir* elixir;
	//std::cout <<"Dice Roll: " << diceRoll << std::endl;
	
	if (diceRoll == 1){ 
			elixir = new WinningElixir;
		}
		else if (diceRoll == 14){ 
			elixir = new LoosingElixir;
		}
		else if (diceRoll == 2 || diceRoll == 3){ 
			elixir = new ArmGoodElixir();
		}
		else if(diceRoll == 4 || diceRoll == 5){ 
			elixir = new HairGoodElixir();
		}
		else if(diceRoll == 6 || diceRoll == 7){ 
			elixir = new EyeGoodElixir();
		}
		else if (diceRoll == 8 || diceRoll == 9){ 
			elixir = new ArmHarmfulElixir();
		}
		else if(diceRoll == 10 || diceRoll == 11){ 
			elixir = new HairHarmfulElixir();
		}
		else if(diceRoll == 12 || diceRoll == 13){ 
			elixir = new EyeHarmfulElixir();
		}

		elixir->setPlayer(player);
		
	return elixir;
	
}

/*
 * Method Name  : play
 *
 * Synopsis     : int Game::play()
 *
 * Description  : 
 * 
 * Returns      : int 
 */

int Game::play()
{
	bool elixirsOn = false;
	bool skip = false;
	
	char showElixirs;
	char skipIntro;
	
	std::cout << std::endl;
	std::cout << "  Make Elixirs Visible?[y/n]: ";
	std::cin >> showElixirs;
	if(showElixirs == 'y'||showElixirs == 'Y')
	{
		elixirsOn = true;
	}
	std::cout << std::endl;
	std::cout << "  Skip Intro?[y/n]: ";
	std::cin >> skipIntro;
	if(skipIntro == 'y'|| skipIntro == 'Y')
	{
		skip = true;
	}	
	
	isNull a;
	badOption b;
	char choice;	// The choice
	system("clear");
	if(skip == false){
		introduction();	
	}else{
		getPatientInfo();
		player->displayDrawing();
		scramble();
		std::cout << "You have changed! " << std::endl;
		player->displayDrawing();
	}
	std::cout << std::endl;
	std::cout << "  You may proceed through the trial rooms in any direction.\n  [n]orth  [e]ast  [w]est  [s]outh " << std::endl;
	Chamber* currentRoom = entranceA;	// The current room starts at entrance
	int count = 0;
	// show chamber names
	this->clock = 5;

	do{

			this->win = checkPlayerState();
		//	std::cout << "win: " << win << std::endl;
			this->lose = checkForLoseGame();
		//	std::cout << "loose: " << loose;
			if(this-> win == true || this-> lose == true ){
				break;
			}
		
			std::cout << "  Time: " << clock << ":00" << std::endl;
			this->clock++;
			std::cout << "  You are in " << currentRoom->getName();
	
		// prompt for direction
		std::cout << "\n\tContinue in which direction? [n/e/w/s]: ";
		std::cin >> choice; 
		std::cout << std::endl;
		system("clear");
		// exceptions thrown if pointer is set to NULL and/or if 
		// input is incorrect
		
	 	try{
				if(choice == 'n')
				{
					if(currentRoom->getN() == NULL)
						throw a;
					else{
						count++;
					//	std::cout << currentRoom->getName() << std::endl;
						currentRoom = currentRoom->getN(); // if not null sets current room to pointer @ room to North
						currentRoom->setPlayer(player);
						std::cout << currentRoom->getName() << std::endl;
						currentRoom->applyChange();
						currentRoom->displayElixirs();
				if(elixirsOn == true){		
						std::cout << "  Elixir One: "<< currentRoom->getPosOne()->getName() << std::endl;
						std::cout << "  Elixir Two: "<< currentRoom->getPosTwo()->getName() << std::endl;
						std::cout << "  Elixir Three: "<< currentRoom->getPosThree()->getName() << std::endl;
				}
						currentRoom->getChoice();
						continue;
					}
				}else if(choice == 'e'){
					if(currentRoom->getE() == NULL)
						throw a;
					else{
						count++;
						currentRoom = currentRoom->getE(); // if not null sets current room to pointer @ room to East
						currentRoom->setPlayer(player);
						currentRoom->applyChange();						
						currentRoom->displayElixirs();
				if(elixirsOn == true){		
						std::cout << "  Elixir One: "<< currentRoom->getPosOne()->getName() << std::endl;
						std::cout << "  Elixir Two: "<< currentRoom->getPosTwo()->getName() << std::endl;
						std::cout << "  Elixir Three: "<< currentRoom->getPosThree()->getName() << std::endl;
				}
						currentRoom->getChoice();						
						continue;
					}
				}else if(choice == 'w'){
					if(currentRoom->getW()== NULL)
						throw a;	
					else{
						count++;
						currentRoom = currentRoom->getW(); // if not null sets current room to pointer @ room to West
						currentRoom->setPlayer(player);
						currentRoom->applyChange();						
						currentRoom->displayElixirs();
				if(elixirsOn == true){		
						std::cout << "  Elixir One: "<< currentRoom->getPosOne()->getName() << std::endl;
						std::cout << "  Elixir Two: "<< currentRoom->getPosTwo()->getName() << std::endl;
						std::cout << "  Elixir Three: "<< currentRoom->getPosThree()->getName() << std::endl;
				}
						currentRoom->getChoice();						
						continue;
					}
				}else if(choice == 's'){
					if(currentRoom->getS()== NULL)
						throw a; 
					else{
						count++;
						currentRoom = currentRoom->getS(); // if not null sets current room to pointer @ room to South
						currentRoom->setPlayer(player); //sets player to room to adapt for potential multi player
						currentRoom->applyChange();						
						currentRoom->displayElixirs();
				if(elixirsOn == true){		
						std::cout << "  Elixir One: "<< currentRoom->getPosOne()->getName() << std::endl;
						std::cout << "  Elixir Two: "<< currentRoom->getPosTwo()->getName() << std::endl;
						std::cout << "  Elixir Three: "<< currentRoom->getPosThree()->getName() << std::endl;
				}						
						currentRoom->getChoice();						
						continue;
					}
				}else
					throw b;
		}catch(isNull){
			std::cout << "\n\tThis door leads to no where...\n"; 
		}catch(badOption){
			std::cout << "\n\tInvalid Input!\n";	
		}catch(...){
			std::cout << "\n\t something went wrong.";
		}
		
		

	}while(lose == false && win == false);
			std::cout << std::endl;
		std::cout << "         ^^^^^  " << std::endl;
		std::cout << "       ([o]_[o])" << std::endl;
		std::cout << "      /|   |o__|\\ " << std::endl;
		std::cout << "      \\|   |o  |/ " << std::endl;
		std::cout << std::endl;
		std::cout <<  std::endl;
		
	if(win == true){
		
		std::cout << "  You are look like yourself again! " << std::endl;
		std::cout << "  Thank you, you have completed the Trials.\n Here is $5.00 for your time. " << std::endl;
	}
	else if(lose == true){
		std::cout << "  Sorry, the changes could not be reversed..." << std::endl;
		std::cout << "  If the FDA approves this medication, we can provide you" << std::endl;
		std::cout << "  with the antidote in about 20 years. " << std::endl;
	}
	return 0;
}
/*
 * Method Name  : checkForLoseGame
 *
 * Synopsis     : bool Game::checkForLoseGame() *
 * Description  : 
 * 
 * Returns      : bool 
 */

bool Game::checkForLoseGame(){
	
	if(this->clock == 12){
		return true;
	}
	else 
		return false;
}

/*
 * Method Name  : checkPlayerState
 *
 * Synopsis     : bool Game::checkPlayerState() 
 *
 * Description  : 
 * 
 * Returns      : bool 
 */

bool Game::checkPlayerState(){
	
	bool hairNormal= false;
	bool eyeNormal= false;
	bool armNormal = false;
	
	if(player->getHairColorEnum() == player->getStartHair()){hairNormal = true;};
	if(player->getEyeColorEnum() == player->getStartEyes()){eyeNormal = true;};
	if(player->getArmsEnum() == player->getStartArms()){armNormal = true;};
	
	if(hairNormal == true && eyeNormal == true && armNormal == true)
	{
		return true;
	}
	else 
		return false;
	
	
}

void Game::scramble(){
	
	EYES eyes = player->getEyeColorEnum();
	HAIR hair = player->getHairColorEnum();
	ARMS arms = player->getArmsEnum();
	
	if(eyes == PURPLE){
		player->setEyeColorEnum(GREEN);
	}
	else if(eyes == GREEN){
		player->setEyeColorEnum(BLUE);
	}
	else if(eyes == BLUE){
		player->setEyeColorEnum(RD);
	}
	else if(eyes == RD){
		player->setEyeColorEnum(PURPLE);
	}
	
	if(hair == PRPL){
		player->setHairColorEnum(BLONDE);
	}
	else if(hair == BLONDE){
		player->setHairColorEnum(BLACK);
	}
	else if(hair == BLACK){
		player->setHairColorEnum(RED);
	}
	else if(hair == RED){
		player->setHairColorEnum(PRPL);
	}
	
	if(arms == ONE){
		player->setArmsEnum(TWO);
	}
	else if(arms == TWO){
		player->setArmsEnum(THREE);
	}
	else if(arms == THREE){
		player->setArmsEnum(FOUR);
	}
	else if(arms == FOUR){
		player->setArmsEnum(ONE);
	}


}