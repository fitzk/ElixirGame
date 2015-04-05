 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: Elixir.h
 */
#ifndef Elixir_H
#define Elixir_H
#include<string>

enum ELIXIRCLR {Y,G,R,B};

class Player;

class Elixir{	
	
	protected: 
		std::string name;
		std::string color;
		ELIXIRCLR enumClr;
		Player* player;
	public:
		Player* getPlayer();
		void setPlayer(Player*a);
		virtual void modifyBodyPart()= 0;
		virtual void explainElixir()=0;
		Elixir(std::string);
		Elixir(){};
		ELIXIRCLR getColor();
		std::string getName();

};


class WinningElixir : public Elixir{

public:
	void modifyBodyPart();
	void resetTimer(){};
	WinningElixir();
	void explainElixir();
	void printOutElixir(){};
};


class LoosingElixir : public Elixir{
	
	public: 
	
	LoosingElixir();
	void modifyBodyPart();
	void explainElixir();
}; 
#endif
