 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: ChildChambers.cpp
 */
#include"ChildChambers.h"
#include"Player.h"


void ArmChamber::applyChange(){

	if(player->getArmsEnum() == ONE && player->canChangeArms == true)
	{
		player->setArmsEnum(TWO);
	}
	else if(player->getArmsEnum()== TWO && player->canChangeArms == true)
	{
		player->setArmsEnum(THREE);
	}
	else if(player->getArmsEnum()== THREE && player->canChangeArms == true)
	{
		player->setArmsEnum(FOUR);
	}
	else if(player->getArmsEnum()== FOUR && player->canChangeArms == true)
	{
		player->setArmsEnum(ONE);
	}
	explainChange();
}

void ArmChamber::explainChange(){
	
	if(player->canChangeArms == true){
		std::cout << std::endl;
		std::cout << "   Whhhhaaat! Your Arms have changed! You have " << player->getArms() << " arms!"<< std::endl;
		player->displayDrawing();
	}
	else{
		std::cout << std::endl;
		std::cout<< "Your Elixirs must be working! Nothing happened!" << std::endl;
		player->displayDrawing();
	}

}
void EyeChamber::applyChange(){
//	std::cout << "This is calling EYE";

	if(player->getEyeColorEnum() == PURPLE && player->canChangeEyes == true)
	{
		player->setEyeColorEnum(GREEN);
	}
	else if(player->getEyeColorEnum()== GREEN && player->canChangeEyes == true)
	{
		player->setEyeColorEnum(BLUE);
	}
	else if(player->getEyeColorEnum()== BLUE && player->canChangeEyes == true)
	{
		player->setEyeColorEnum(RD);
	}
	else if(player->getEyeColorEnum() == RD && player->canChangeEyes == true)
	{
		player->setEyeColorEnum(PURPLE);
	}
	explainChange();

}
void EyeChamber::explainChange(){
	
	if(player->canChangeEyes == true){
		std::cout << std::endl;
		std::cout << "   Ahhhh! Your Eyes have changed! You now have " << player->getEyeColor() << " eyes!"<< std::endl;
		player->displayDrawing();
	}else{
		std::cout << std::endl;
		std::cout<< "Your Elixirs must be working! Nothing happened!" << std::endl;
		player->displayDrawing();
	}
}
//enum EYES {PURPLE, GREEN, BLUE, RD};
//enum HAIR {PRPL, BLONDE, BLACK, RED};
//enum ARMS{ONE,TWO,THREE,FOUR};
void HairChamber::applyChange(){
	//std::cout << "This is calling EYE";

	if(player->getHairColorEnum() == PRPL && player->canChangeHair == true)
	{
		player->setHairColorEnum(BLONDE);
	}
	else if(player->getHairColorEnum() ==  BLONDE && player->canChangeHair == true)
	{
		player->setHairColorEnum(BLACK);
	}
	else if(player->getHairColorEnum() ==  BLACK && player->canChangeHair == true)
	{
		player->setHairColorEnum(RED);
	}
	else if(player->getHairColorEnum() == RED && player->canChangeHair == true)
	{
		player->setHairColorEnum(PRPL);
	}	
	explainChange();
}

void HairChamber::explainChange(){
	if(player->canChangeHair == true){
		std::cout << std::endl;
		std::cout << "   Whoa! Your HAIR has changed! You now have " << player->getHairColor() << " Hair!"<< std::endl;
		std::cout << "   I guess that's not that weird..." << std::endl;
		player->displayDrawing();
	}else{
		std::cout << std::endl;
		std::cout<< "Your Elixirs must be working! Nothing happened!" << std::endl;
		player->displayDrawing();
	}
}