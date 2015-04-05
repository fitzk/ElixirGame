/*****************************************************************
* Name:					Kayla Fitzsimmons
* Date:					2/9/2015		
* Course: 				CS162-400
* File Name: 			Dice.h
*
* Over View:  rolls dice.
*****************************************************************/
#ifndef DICE_H
#define	DICE_H
#include<cstdlib>
#include<ctime>

/**************************************************************************************************
 * <summary>	A dice. </summary>
 *
 * <remarks>	Kayla, 2/21/2015. </remarks>
 **************************************************************************************************/

class Dice
{
	public:
		Dice();
		void setNumSides(int numSides);
		virtual int rollDice() const;
		int rollMoreDice(int);
	protected:
		int numSides;
};

#endif