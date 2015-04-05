 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: Elixir.cpp
 */

#include"Elixir.h"
#include"Player.h"

/*
 * Method Name  : getPlayer
 *
 * Synopsis     : Player* Elixir::getPlayer()
 *
 * Description  : 
 * 
 * Returns      : Player* 
 */
Player* Elixir::getPlayer()
{ return player; }

/*
 * Method Name  : setPlayer
 *
 * Synopsis     : void Elixir::setPlayer(Player*a)
 *
 * Description  : 
 * 
 */
void Elixir::setPlayer(Player*a)
{ player = a; }

/*
 * Method Name  : Elixir
 *
 * Synopsis     : Elixir::Elixir(std::string clr) 
 *
 * Arguments    : string  clr : 
 *
 * Description  : 
 * 
 * Returns      : 
 */

Elixir::Elixir(std::string clr){
	
	this->color = clr;
}
/*
 * Method Name  : getColor
 *
 * Synopsis     : ELIXIRCLR Elixir::getColor() 
 *
 * Description  : 
 * 
 * Returns      : ELIXIRCLR 
 */
ELIXIRCLR Elixir::getColor(){
	
	return enumClr;
}

/*
 * Method Name  : getName
 *
 * Synopsis     : string Elixir::getName() 
 *
 * Description  : 
 * 
 * Returns      : string 
 */
std::string Elixir::getName(){
	return name;
}
/*
 * Method Name  : WinningElixir
 *
 * Synopsis     : WinningElixir::WinningElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

WinningElixir::WinningElixir(){
	
	name = "Winning Elixir";
	
};
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void WinningElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */
void WinningElixir::modifyBodyPart(){
	
	player->setEyeColorEnum(player->startEyes);
	player->setHairColorEnum(player->startHair);
	player->setArmsEnum(player->startArms);
	player->displayDrawing();
	explainElixir();
}
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void WinningElixir::explainElixir() 
 *
 * Description  : 
 * 
 */

void WinningElixir::explainElixir(){
	std::cout << "  Interesting, this Elixir just cancelled out any " << std::endl;
	std::cout << " changes made by the other Elixirs!" << std::endl;
}
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void LoosingElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */

void LoosingElixir::modifyBodyPart(){
	
	player->canChangeArms = true;
	player->canChangeEyes = true;
	player->canChangeHair = true;
	player->displayDrawing();
	explainElixir();
	
}
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void LoosingElixir::explainElixir() 
 *
 * Description  : 
 * 
 */

void LoosingElixir::explainElixir(){
	std::cout << "  Interesting, this Elixir just cancelled out any " << std::endl;
	std::cout << "  positive effects of the other Elixirs!" << std::endl;
}
/*
 * Method Name  : LoosingElixir
 *
 * Synopsis     : LoosingElixir::LoosingElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

LoosingElixir::LoosingElixir(){
	
	name = "Permanent Modifications";
}
