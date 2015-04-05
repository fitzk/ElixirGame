 /*  Last Edited By: Kayla Fitzsimmons
 *  Course: CS162-400
 *  Date: 3/17/2015
 *  Date Due: 3/17/2015
 *  Author: Kayla
 *  File: main.cpp
 */
#include<iostream>
#include<string>
#include<fstream>
#include<cstdio>
#include"Game.h"


#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
class Error{
	
};
int main(){


	Game a;
	
	try{
		a.play();

	}catch(Error){
		
	std::cout << "Error loading game." << std::endl;
	}
	

	return 0;
}