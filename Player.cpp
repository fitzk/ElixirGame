 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Created on: 3/15/2015
 *  Author: Kayla
 *  File: Player.cpp
 */
#include"Player.h"

/*
 * Method Name  : getEyeColorEnum
 *
 * Synopsis     : EYES Player::getEyeColorEnum() 
 * 
 * Description  : 
 * 
 * Returns      : EYES 
 */
EYES Player::getEyeColorEnum(){
	
	return eyeColor;
	
}

/*
 * Method Name  : getEyeColor
 *
 * Synopsis     : string Player::getEyeColor() 
 * 
 * Description  : 
 * 
 * Returns      : string 
 */
std::string Player::getEyeColor(){
	
	if(getEyeColorEnum() == PURPLE)
		return "Purple";
	if(getEyeColorEnum() == GREEN)
		return "Green";
	if(getEyeColorEnum() == BLUE)
		return "Blue";
	if(getEyeColorEnum() == RD)
		return "Red";
	
}
/*
 * Method Name  : setEyeColorEnum
 *
 * Synopsis     : void Player::setEyeColorEnum(EYES a)
 *
 * Arguments    : EYES  a : 
 *
 * Description  : 
 * 
 */

void Player::setEyeColorEnum(EYES a)
{
	eyeColor = a;
}
/*
 * Method Name  : getHairColorEnum
 *
 * Synopsis     : HAIR Player::getHairColorEnum() 
 *
 * Description  : 
 * 
 * Returns      : HAIR 
 */

HAIR Player::getHairColorEnum(){
	
	return hairColor;
	
}
/*
 * Method Name  : setHairColorEnum
 *
 * Synopsis     : void Player::setHairColorEnum(HAIR a) *
 * Arguments    : HAIR  a : 
 *
 * Description  : 
 * 
 */

void Player::setHairColorEnum(HAIR a){
	
	hairColor = a;
}
/*
 * Method Name  : getHairColor
 *
 * Synopsis     : string Player::getHairColor() 
 *
 * Description  : 
 * 
 * Returns      : string 
 */

std::string Player::getHairColor(){
	
	if(getHairColorEnum() == 0)
		return "Purple";
	if(getHairColorEnum() == 1)
		return "Blonde";
	if(getHairColorEnum() == 2)
		return "Black";
	if(getHairColorEnum() == 3)
		return "Red";
	
}
/*
 * Method Name  : getArmsEnum
 *
 * Synopsis     : ARMS Player::getArmsEnum() 
 *
 * Description  : 
 * 
 * Returns      : ARMS 
 */

ARMS Player::getArmsEnum(){
	
	return numArms;
	
}
/*
 * Method Name  : getArms
 *
 * Synopsis     : string Player::getArms() 
 *
 * Description  : 
 * 
 * Returns      : string 
 */

std::string Player::getArms(){
	
	if(getArmsEnum() == 0)
		return "One";
	if(getArmsEnum() == 1)
		return "Two";
	if(getArmsEnum() == 2)
		return "Three";
	if(getArmsEnum() == 3)
		return "Four";
	
}
/*
 * Method Name  : setArmsEnum
 *
 * Synopsis     : void Player::setArmsEnum(ARMS arms) *
 * Arguments    : ARMS  arms : 
 *
 * Description  : 
 * 
 */

void Player::setArmsEnum(ARMS arms){
	
	this->numArms = arms;
}
/*
 * Method Name  : Player
 *
 * Synopsis     : Player::Player(EYES eye, HAIR hair, ARMS arms) 
 *
 * Arguments    : EYES  eye : 
 *                HAIR  hair : 
 *                ARMS  arms : 
 *
 * Description  : 
 * 
 * Returns      : 
 */

Player::Player(EYES eye, HAIR hair, ARMS arms){
	
	startEyes = eye;
	startHair = hair;
	startArms = arms;
	
	eyeColor = eye;
	hairColor = hair;
	numArms = arms;
	
	canChangeArms = true;
	canChangeHair = true;
	canChangeEyes = true;
	
}

void Player::setPlayer(EYES eye, HAIR hair, ARMS arms){
	
	startEyes = eye;
	startHair = hair;
	startArms = arms;
	
	eyeColor = eye;
	hairColor = hair;
	numArms = arms;
	
	canChangeArms = true;
	canChangeHair = true;
	canChangeEyes = true;
	
}
/*
 * Method Name  : displayDrawing
 *
 * Synopsis     : void Player::displayDrawing() 
 *
 * Description  : 
 * 
 */

void Player::displayDrawing(){
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
//	std::cout << "\t\t     ! " <<std::endl;
	//display hair color
	if(this->hairColor == 0)
	{
		std::cout << ANSI_COLOR_LIGHTPURP << "\t\t    ^^^" << ANSI_COLOR_RESET << std::endl;
	}
		if(this->hairColor == 1)
	{
		std::cout << ANSI_COLOR_YELLOW << "\t\t    ^^^" << ANSI_COLOR_RESET << std::endl;
	}
	if(this->hairColor == 2)
	{
		std::cout << ANSI_COLOR_BLACK << "\t\t    ^^^" << ANSI_COLOR_RESET << std::endl;
	}	
	if(this->hairColor == 3)
	{
		std::cout << ANSI_COLOR_RED << "\t\t    ^^^" << ANSI_COLOR_RESET << std::endl;
	}
	//display eye color

	
	
	if(this->eyeColor == 0)
	{
		std::cout  << "\t\t   (" << ANSI_COLOR_MAGENTA << "0" << ANSI_COLOR_RESET << "_" ANSI_COLOR_MAGENTA << "0" << ANSI_COLOR_RESET << ")"  << std::endl;
	}
		if(this->eyeColor == 1)
	{
		std::cout << "\t\t   (" << ANSI_COLOR_GREEN << "0" << ANSI_COLOR_RESET << "_" ANSI_COLOR_GREEN << "0" << ANSI_COLOR_RESET << ")" << std::endl;
	}
	if(this->eyeColor == 2)
	{
		std::cout  << "\t\t   (" << ANSI_COLOR_BLUE << "0" << ANSI_COLOR_RESET << "_" ANSI_COLOR_BLUE << "0" << ANSI_COLOR_RESET << ")" << std::endl;
	}
		if(this->eyeColor == 3)
	{
		std::cout  << "\t\t   (" << ANSI_COLOR_RED << "0" << ANSI_COLOR_RESET << "_" ANSI_COLOR_RED << "0" << ANSI_COLOR_RESET << ")" << std::endl;
	}
	//number of arms
	if(this->numArms == 0)
	{
		std::cout << "\t\t _/"<< ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_CYAN << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET	
		<< std::endl;
	}
	if(this->numArms == 1)
	{
		std::cout << "\t\t _/" << ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_CYAN << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET	
		<< "\\_" << std::endl;
	}

	if(this->numArms == 2)
	{
		std::cout << "\t\t _/" << ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_CYAN << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET	
		<< "\\_" << std::endl;
		std::cout << "\t\t _/" << std::endl;
	}

	if(this->numArms == 3)
	{
		std::cout << "\t         _/" << ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET 
		<< ANSI_COLOR_CYAN << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_YELLOW << "\\" << ANSI_COLOR_RESET
		<< ANSI_COLOR_CYAN << "|" << ANSI_COLOR_RESET	
		<< "\\_" << std::endl;
		std::cout << "\t\t _/     \\_" << std::endl;
	}
}
/*
 * Method Name  : storeElixir
 *
 * Synopsis     : void Player::storeElixir(Elixir* a) *
 * Arguments    : Elixir * a : 
 *
 * Description  : 
 * 
 */

void Player::storeElixir(Elixir* a){
	
	pack.setElixir(a);
}
/*
 * Method Name  : takeElixir
 *
 * Synopsis     : void Player::takeElixir() *
 * Description  : 
 * 
 */

void Player::takeElixir(){
	
	pack.takeElixir();
}
/*
 * Method Name  : getStartEyes
 *
 * Synopsis     : EYES Player::getStartEyes() *
 * Description  : 
 * 
 * Returns      : EYES 
 */

EYES Player::getStartEyes(){
	return startEyes;
}
/*
 * Method Name  : getStartHair
 *
 * Synopsis     : HAIR Player::getStartHair() *
 * Description  : 
 * 
 * Returns      : HAIR 
 */

HAIR Player::getStartHair(){
	return startHair;
}
/*
 * Method Name  : getStartArms
 *
 * Synopsis     : ARMS Player::getStartArms() *
 * Description  : 
 * 
 * Returns      : ARMS 
 */

ARMS Player::getStartArms(){
	return startArms;
}