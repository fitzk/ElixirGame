 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: HarmfulElixirs.h
 */
#include"HarmfulElixirs.h"
#include"Player.h"

/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void EyeHarmfulElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */
void EyeHarmfulElixir::modifyBodyPart(){
	if(player->canChangeEyes == false){
		player->canChangeEyes = true;
		explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
			player->displayDrawing();
	}
}
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void EyeHarmfulElixir::explainElixir() 
 *
 * Description  : 
 * 
 */

void EyeHarmfulElixir::explainElixir(){
	
 if (player->canChangeEyes == true){
		std::cout << std::endl;
		std::cout << "   Uh Oh... You don't look too good kid. " << std::endl;
		std::cout << "   Do you have something in your EYE? Looks like your EYES can change again..." << std::endl; 
		player->displayDrawing();
	}
} 
/*
 * Method Name  : EyeHarmfulElixir
 *
 * Synopsis     : EyeHarmfulElixir::EyeHarmfulElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

EyeHarmfulElixir::EyeHarmfulElixir(){
	name = "Eye Negative Modification";
}
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void HairHarmfulElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */
void HairHarmfulElixir::modifyBodyPart(){
	if(player->canChangeHair == false){
	player->canChangeHair = true;
	explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
		player->displayDrawing();
	} 
}
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void HairHarmfulElixir::explainElixir() 
 *
 * Description  : 
 * 
 */
void HairHarmfulElixir::explainElixir(){
	if(player->canChangeHair == true){
		std::cout << std::endl;
		std::cout << "   Uh Oh... You don't look too good kid. " << std::endl; 
		std::cout << "   Your HAIR might be a little more mailable now... " << std::endl; 
		player->displayDrawing();
	}
}
/*
 * Method Name  : HairHarmfulElixir
 *
 * Synopsis     : HairHarmfulElixir::HairHarmfulElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */

HairHarmfulElixir::HairHarmfulElixir(){
	name = "Hair Negative Modification";
}
/*
 * Method Name  : modifyBodyPart
 *
 * Synopsis     : void ArmHarmfulElixir::modifyBodyPart() 
 *
 * Description  : 
 * 
 */

void ArmHarmfulElixir::modifyBodyPart(){
	if(player->canChangeArms == false){
		player->canChangeArms = true;
		explainElixir();
	}else{
		std::cout <<" Hmmm... that Elixir seems to have had no effect!" << std::endl;
			player->displayDrawing();
	}
} 
/*
 * Method Name  : explainElixir
 *
 * Synopsis     : void ArmHarmfulElixir::explainElixir() 
 *
 * Description  : 
 * 
 */
void ArmHarmfulElixir::explainElixir(){
	
	if(player->canChangeArms == true)
	{
		std::cout << std::endl;
		std::cout << "   Uh Oh... You don't look too good kid. " << std::endl;
		std::cout << "   Your ARMS look funny, I think they can change again..." << std::endl; 
		player->displayDrawing();
	}
	
}
/*
 * Method Name  : ArmHarmfulElixir
 *
 * Synopsis     : ArmHarmfulElixir::ArmHarmfulElixir() 
 *
 * Description  : 
 * 
 * Returns      : 
 */
ArmHarmfulElixir::ArmHarmfulElixir(){
	name = "Arm Negative Modification";
}