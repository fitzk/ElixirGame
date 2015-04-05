 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: GoodElixirs.h
 */
#ifndef GOODELIXIR_H
#define GOODELIXIR_H

#include"Elixir.h"
class Player;

class EyeGoodElixir : public Elixir{
public:
	EyeGoodElixir();
	~EyeGoodElixir(){};
	void modifyBodyPart();
	void explainElixir();
};

class HairGoodElixir : public Elixir{
public:
	HairGoodElixir();
	~HairGoodElixir(){};
	void modifyBodyPart();
	void explainElixir();	
};

class ArmGoodElixir : public Elixir{
public:
	ArmGoodElixir();
	~ArmGoodElixir(){};
	void modifyBodyPart();
	void explainElixir();	
};

#endif
