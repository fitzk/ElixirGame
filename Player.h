  /*  Last Edited By: Kayla Fitzsimmons
   *  Course: CS162-400
   *  Date: 3/17/2015
   *  Created on: 3/15/2015
   *  Author: Kayla
   *  File: Player.h
   */
#ifndef PLAYER_H
#define PLAYER_H
#include"backPack.h"

#define BACKGROUND "\x1b[47m"
#define ANSI_COLOR_BLACK "\x1b[30m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_LIGHTPURP   "\x1b[37m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_WHAT   "\x1b[49m"

enum EYES {PURPLE, GREEN, BLUE, RD};
enum HAIR {PRPL, BLONDE, BLACK, RED};
enum ARMS{ONE,TWO,THREE,FOUR};

class Elixir;
//class WinningElixir;
//class GoodElixir;

class Player{
	
	protected:
		EYES eyeColor;
		HAIR hairColor;
		ARMS numArms;
		
		bool changeEye;
		bool changeHair;
		bool changeArms;
		
		EYES startEyes;
		HAIR startHair;
		ARMS startArms;

	public:
		EYES getStartEyes();
		HAIR getStartHair();
		ARMS getStartArms();

		Player(){};
		Player(EYES eye, HAIR hair, ARMS arms);
		void setPlayer(EYES eye, HAIR hair, ARMS arms);
		EYES getEyeColorEnum();
		std::string getEyeColor();
		void setEyeColorEnum(EYES);
		
		void displayDrawing();
		
		HAIR getHairColorEnum(); 		//get hair color (enum)
		std::string getHairColor(); 	//get hair color (string)
		void setHairColorEnum(HAIR);	//set hair color (enum)
		
		ARMS getArmsEnum();
		std::string getArms();
		void setArmsEnum(ARMS);
		
		bool canChangeArms;
		bool canChangeHair;
		bool canChangeEyes;
		
		
		friend class WinningElixir; // Elixir is a friend class
		friend class EyeGoodElixir;
		friend class HairGoodElixir;
		friend class ArmGoodElixir;
		friend class EyeHarmfulElixir;
		friend class HairHarmfulElixir;
		friend class ArmHarmfulElixir;
		backPack pack;  	 //backPack holds Elixir
		
		void storeElixir(Elixir* a);
		void takeElixir();
	
};


#endif