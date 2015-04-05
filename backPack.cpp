 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: GoodElixirs.h
 */
#include"backPack.h"
#include"Elixir.h"

/*
 * Method Name  : setElixir
 *
 * Synopsis     : void backPack::setElixir(Elixir* a) 
 *
 * Arguments    : Elixir * a : 
 *
 * Description  : 
 * 
 */
void backPack::setElixir(Elixir* a){

		elixir = a;
}
/*
 * Method Name  : getElixir
 *
 * Synopsis     : Elixir* backPack::getElixir() 
 *
 * Description  : 
 * 
 * Returns      : Elixir* 
 */

Elixir* backPack::getElixir(){

		return elixir;
}
/*
 * Method Name  : takeElixir
 *
 * Synopsis     : void backPack::takeElixir()     
 *
 * Description  : 
 * 
 */
void backPack::takeElixir(){
	if(elixir != NULL){
		std::cout << "	You took the Elixir!" << std::endl;
		elixir->modifyBodyPart();
		elixir = NULL;
	}

}
/*
 * Method Name  : backPack
 *
 * Synopsis     : backPack::backPack() 
 *
 * Description  : 
 * 
 * Returns      : 
 */
backPack::backPack(){
	elixir = NULL;
}
