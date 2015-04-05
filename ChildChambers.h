#ifndef CHILDCHAMBERS_H
#define CHILDCHAMBERS_H
//#include"Chamber.h"
#include"Chamber.h"
//#include"Player.h"
//class Chamber;
//class Player;

class ArmChamber : public Chamber{

	public:

		int mana;
		void explainElixirs(){};
		void explainChange();
		void applyChange();
		ArmChamber(std::string str, Chamber *chamPtr1=NULL, Chamber* chamPtr2=NULL, Chamber* chamPtr3=NULL, Chamber* chamPtr4=NULL) 
			: Chamber(str, chamPtr1, chamPtr2,chamPtr3,chamPtr4){};

};

class HairChamber : public Chamber{
	public:
//	int mana;
	void explainElixirs(){};
	void explainChange();
	void applyChange();	
	HairChamber(std::string str, Chamber *chamPtr1 = NULL, Chamber* chamPtr2 = NULL, Chamber* chamPtr3 = NULL, Chamber* chamPtr4 = NULL) 
		: Chamber(str, chamPtr1, chamPtr2,chamPtr3,chamPtr4){};

};

class EyeChamber : public Chamber {

	public:
	int cat;
	 void explainElixirs(){};
	 void explainChange();
	 void applyChange();
		EyeChamber(std::string str, Chamber* chamPtr1 = NULL, Chamber* chamPtr2= NULL, Chamber* chamPtr3= NULL, Chamber* chamPtr4= NULL) 
			: Chamber(str, chamPtr1, chamPtr2,chamPtr3,chamPtr4){};

};

#endif
//str, chamPtr1, chamPtr2, chamPtr3, chamPtr4