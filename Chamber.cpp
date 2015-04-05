 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: Chamber.cpp
 */
 
#include <stdio.h>      
#include <stdlib.h>
#include<iostream>
#include"Chamber.h"
#include"Elixir.h"
#include"Player.h"
/*
 * Method Name  : setN
 *
 * Synopsis     : void Chamber::setN(Chamber* n) *
 * Arguments    : Chamber * n : 
 *
 * Description  : 
 * 
 */

		//setters for pointers
		void Chamber::setN(Chamber* n){nPtr = n;};
		void Chamber::setE(Chamber* e){ePtr = e;};
		void Chamber::setW(Chamber* w){wPtr = w;};
		void Chamber::setS(Chamber* s){sPtr = s;};

		//getters for pointers
		Chamber* Chamber::getN(){return nPtr;};
		Chamber* Chamber::getE(){return ePtr;};
		Chamber* Chamber::getW(){return wPtr;};
		Chamber* Chamber::getS(){return sPtr;};
		
		//setters for Elixirs
		void Chamber::setPosOne(Elixir* one){posOne = one;};
		void Chamber::setPosTwo(Elixir* two){posTwo = two;};
		void Chamber::setPosThree(Elixir* three){posThree = three;};

		//getters for Elixirs
		Elixir* Chamber::getPosOne(){return posOne;};
		Elixir* Chamber::getPosTwo(){return posTwo;};
		Elixir* Chamber::getPosThree(){return posThree;};
/**************************************************************************************************
 * summary: 	Initializes a new instance of the Chamber class. 
 *
 * parameters: 
 * 				The name
 * 				(All pointer parameters default to NULL)
 * 				The Chamber* to north
 * 				The Chamber* to east
 * 				The Chamber* to west
 * 				The Chamber* to south
 **************************************************************************************************/
Chamber::Chamber(std::string nn, Chamber* n = NULL,Chamber*e = NULL, Chamber*w = NULL, Chamber*s = NULL)
{

//	std::cout <<"Constructor is calling" <<std::endl;
	name = nn;
//	std::cout << name << std::endl;
	nPtr = n;
	ePtr = e;
	wPtr = w;
	sPtr = s;

}
/*
 * Method Name  : setChambers
 *
 * Synopsis     : Chamber::setChambers(Chamber* n = NULL,Chamber*e = NULL, Chamber*w = NULL, Chamber*s = NULL)
 *
 * Arguments    : Chamber * n  
 *
 * Description  : 
 * 
 * Returns      : 
 */
void Chamber::setChambers(Chamber* n,Chamber*e, Chamber*w, Chamber*s)
{
	nPtr = n;
	ePtr = e;
	wPtr = w;
	sPtr = s;
}
/*
 * Method Name  : getChoice
 *
 * Synopsis     : void Chamber::getChoice() 
 *
 * Description  : 
 * 
 */

void Chamber::getChoice(){
	
	int choice;
	char take;
	int badDigit;
	bool fool;
	
	do{
		std::cout << "\t Which Elixir do you choose: ";
		try{
			std::cin >> choice;
	
			if(choice > 3 || choice < 1)
			{
				throw badDigit;
			}		
		
		
			 std::cout << "\t   Take it or save it\n\t  [t = take, s = save]: ";
			 std::cin >> take;
			// std::cout << take;
			system("clear");
			 if (take == 't' || take == 'T')
			 {
				if(choice == 1){
					 posOne->modifyBodyPart();
			//		 posOne->explainElixir();
				//	 std::cout << "		You takes it!";
				 }
				 else if(choice == 2){
					 posTwo->modifyBodyPart();
			//		 posTwo->explainElixir();
				//	 std::cout << "		You takes it!";
				 }
				 else if(choice == 3){
					 posThree->modifyBodyPart();
			//		 posThree->explainElixir();
				//	 std::cout << "		You takes it!";
				 }
			//	 std::cout << "		You takes it!";
				
				 fool = 0;
			 }
			 else if (take == 's' || take == 'S')
			 {
				if(player->pack.getElixir() != NULL){
					std::cout << "	To save it, you must drink the Elixir that you," << std::endl;
					std::cout << "	are already carrying in your pack. Bottoms up!" << std::endl;
					player->takeElixir();
				}

				if(choice == 1){
					player->storeElixir(posOne);
				 }
				 else if(choice == 2){
					player->storeElixir(posTwo);
				 }
				 else if(choice == 3){
					player->storeElixir(posThree);
				 } 
				 std::cout << std::endl;
				 std::cout << "	You stored the Elixir in your pack! Hopefully that was a good idea..." << std::endl;
				 player->displayDrawing();
				
				 fool = 0;
			 }
			 else{
				 throw badDigit;
			 }
			 
		
		}
		catch(int){
			std::cout << "Come on buddy, we don't have all day!" << std::endl;
			std::cin.clear();
			std::cin.ignore(1000, '\n');
			fool = 1;
		}
	}while(fool == 1);
	std::cin.clear();
	std::cin.ignore(1000, '\n');
	
}
/*
 * Method Name  : displayElixirs
 *
 * Synopsis     : void Chamber::displayElixirs() 
 *
 * Description  : 
 * 
 */
void Chamber::displayElixirs(){
	
	std::cout << std::endl;
	std::cout << "		(1)   (2)   (3)   " << std::endl;
	std::cout << "               o      o    o  " << std::endl;
	std::cout << "                o    o    o  " << std::endl;	
	std::cout << "               o      o    o  " << std::endl;
	std::cout << "               __    __    __  " << std::endl;
	std::cout << "               )(    )(    )(  " << std::endl;
	std::cout << "              (__)  (__)  (__) " << std::endl;
	std::cout << std::endl;
//	posOne->getColor();	
}

