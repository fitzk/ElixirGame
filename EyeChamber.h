#ifndef EYECHAMBER_H
#define EYECHAMBER_H

#include "Chamber.h"
#include<iostream>
#include<string>

class EyeChamber : public Chamber {

	public:
	int cat;
	 void explainElixirs(){};
	 void explainChange(){};
		EyeChamber(std::string str, Chamber* chamPtr1 = NULL, Chamber* chamPtr2= NULL, Chamber* chamPtr3= NULL, Chamber* chamPtr4= NULL) 
			: Chamber(str, chamPtr1, chamPtr2,chamPtr3,chamPtr4){};

};
#endif