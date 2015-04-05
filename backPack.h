#ifndef BACKPACK_H
#define BACKPACK_H
//
//#include"Elixir.h"
#include<iostream>

class Elixir;
//class WinningElixir;
//class GoodElixir;


struct backPack{
public:
	std::string name;
	Elixir* elixir;
	void takeElixir();
	Elixir* getElixir();
	void setElixir(Elixir* a);
	backPack();
};
#endif
