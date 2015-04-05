#ifndef HARMFULELIXIR_H
#define HARMFULELIXIR_H

#include"Elixir.h"
class Player;

class EyeHarmfulElixir : public Elixir{
public:
	EyeHarmfulElixir();
	~EyeHarmfulElixir(){};
	void modifyBodyPart();
	void explainElixir();
};

class HairHarmfulElixir : public Elixir{
public:
	HairHarmfulElixir();
	~HairHarmfulElixir(){};
	void modifyBodyPart();
	void explainElixir();	
};

class ArmHarmfulElixir : public Elixir{
public:
	ArmHarmfulElixir();
	~ArmHarmfulElixir(){};
	void modifyBodyPart();
	void explainElixir();	
};

#endif