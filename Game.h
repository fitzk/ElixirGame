  /*  Last Edited By: Kayla Fitzsimmons
   *  Course: CS162-400
   *  Date: 3/17/2015
   *  Created on: 3/15/2015
   *  Author: Kayla
   *  File: Game.h
   */
#ifndef GAME_H
#define GAME_H

#include<string>
#include<fstream>
#include<iostream>
#include"Dice.h"

#define BACKGROUND "\x1b[47m"
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

class Player;
class Elixir;
class Chamber;
class ArmChamber;
class EyeChamber;
class HairChamber;

class Game{

	public:
		Game();
		void introduction();
		int play();
		Dice dice;
		Player* player;
		Chamber* entranceA;
		Chamber* B;
		Chamber* C;
		Chamber* D;
		Chamber* E;
		Chamber* F;
		Chamber* G;
		Chamber* H;
		Chamber* I;
		Chamber* J;
		void setChamberElixirs(Chamber*);
		Elixir* setChamber(int);
		void scramble();
		bool checkPlayerState();
		bool checkForLoseGame();
		bool checkForWinGame();
		
		bool win;
		bool lose;
		int clock;
		
		void getPatientInfo();
};
	

class isNull{};
class badOption{};

#endif