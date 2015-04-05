 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: GoodElixirs.cpp
 */
#include"GoodElixirs.h"
#include"Player.h"

/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void EyeGoodElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */
void EyeGoodElixir::modifyBodyPart(){
	if(player->canChangeEyes == true){
		player->canChangeEyes = false;
		player->setEyeColorEnum(player->startEyes);
		explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
		player->displayDrawing();
	}	
}
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void EyeGoodElixir::explainElixir() 
 *
 * Description  : 
 * 
 */

void EyeGoodElixir::explainElixir()
{
	
	 if (player->canChangeEyes == false){
			std::cout << std::endl;
		//	std::cout << "   The Elixir is working! Your EYES changed back to normal!" << std::endl; //player->getEyeColor()  << " eyes!"<< std::endl;
			std::cout << "  It looks like the tests won't effect your EYES now!\n  Your EYES might look normal for the time being.\n  Just watch out for those Elixirs..." << std::endl;
			player->displayDrawing();
		}
} 
/*
 * Method Name  : EyeGoodElixir
 *
 * Synopsis     : EyeGoodElixir::EyeGoodElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

EyeGoodElixir::EyeGoodElixir(){
	name = "Eye Modification";
}
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void HairGoodElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */

void HairGoodElixir::modifyBodyPart(){
	if(player->canChangeHair == true){
		player->canChangeHair = false;
		player->setHairColorEnum(player->startHair);
		explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
			player->displayDrawing();
	}
}
 /*
  * Method Name  : explainElixir
  *
  * Synopsis     : void HairGoodElixir::explainElixir()  
  *
  * Description  : 
  * 
  */
 
void HairGoodElixir::explainElixir(){
	if(player->canChangeHair == false){
		std::cout << std::endl;
	//	std::cout << "   The Elixir is working! Your HAIR changed back to normal!" << std::endl; // << player->getHairColor()  << " Hair!"<< std::endl;
		std::cout << "  It looks like the tests won't effect your HAIR now!\nYour HAIR looks normal for the time being.\nJust watch out for those Elixirs..." << std::endl;
		player->displayDrawing();
	}
}
/*
 * Method Name  : HairGoodElixir
 *
 * Synopsis     : HairGoodElixir::HairGoodElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

HairGoodElixir::HairGoodElixir(){
	name = "Hair Modification";
	
}
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void ArmGoodElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */
void ArmGoodElixir::modifyBodyPart(){
	if(player->canChangeArms == true){
		player->canChangeArms = false;	
		player->setArmsEnum(player->startArms);
		explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
	player->displayDrawing();}
}
 /*
  * Method Name  : explainElixir
  *
  * Synopsis     : void ArmGoodElixir::explainElixir() 
  *
  * Description  : 
  * 
  */
void ArmGoodElixir::explainElixir(){
	
	if(player->canChangeArms == false){
		std::cout << std::endl;
		std::cout << "  It looks like the tests won't effect your ARMS now!\nYour ARMS might look normal for the time being.\nJust watch out for those Elixirs..." << std::endl;
		player->displayDrawing();
	}
	
}
/*
 * Method Name  : ArmGoodElixir
 *
 * Synopsis     : ArmGoodElixir::ArmGoodElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

ArmGoodElixir::ArmGoodElixir(){
	name = "Arm Modification";
}