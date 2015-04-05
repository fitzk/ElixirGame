#ifndef CHAMBER_H
#define CHAMBER_H

#include<iostream>
#include<string>

// #include"Elixir.h"
//#include"GoodElixirs.h"
//#include"Player.h"
class Elixir;
class Player;

class Chamber{
	
	protected:
		std::string name;   // The chamber name
		Chamber* nPtr;  // The north pointer
		Chamber* ePtr;  // The east pointer
		Chamber* wPtr;  // The west pointer
		Chamber* sPtr;  // The south pointer
		
		//each chamber will have 3 Elixirs
		Elixir* posOne;
		Elixir* posTwo;
		Elixir* posThree;
		
		Player* player;
	
	public:
		

		void setPlayer(Player* p){
			player = p;
		}
		Player* getPlayer(){
			return player;
		}

		Chamber(std::string, Chamber*, Chamber*, Chamber*, Chamber*); // constructor 
	//	Chamber(){};
		// setter and getter for name member
		void setName(std::string a){name = a;};
		std::string getName(){return name;};
		
		virtual void explainElixirs()= 0;
		virtual void applyChange() = 0; //explains the change in appearance
		virtual void explainChange() = 0;
		//setters for pointers
		void setN(Chamber* n);
		void setE(Chamber* e);
		void setW(Chamber* w);
		void setS(Chamber* s);
		
		//getters for pointers
		Chamber* getN();
		Chamber* getE();
		Chamber* getW();
		Chamber* getS();
		
		//setters for Elixirs
		void setPosOne(Elixir* one);
		void setPosTwo(Elixir* two);
		void setPosThree(Elixir* three);

		//getters for pointers
		Elixir* getPosOne();
		Elixir* getPosTwo();
		Elixir* getPosThree();
		
		//sets all the directional pointers in the class
		void setChambers(Chamber* n,Chamber*e, Chamber*w, Chamber*s);
		//sets all the elixirs in the class
		void setElixirs(Elixir* one, Elixir* two, Elixir* three);
		void displayElixirs();
		void getChoice();
};


#endif