#include"Dice.h"
/**************************************************************************************************
 * <summary>	Default constructor. </summary>
 *
 * <remarks>	Kayla, 2/21/2015. </remarks>
 **************************************************************************************************/
Dice::Dice()
{
	numSides = 6;
}

/**************************************************************************************************
 * <summary>	Sets number sides. </summary>
 *
 * <remarks>	Kayla, 2/21/2015. </remarks>
 *
 * <param name="numSides">	Number of sides. </param>
 **************************************************************************************************/

void Dice::setNumSides(int numSides)
{
	this->numSides = numSides;
}

/**************************************************************************************************
 * <summary>	Roll dice. </summary>
 *
 * <remarks>	Kayla, 2/21/2015. </remarks>
 *
 * <returns>	An int. </returns>
 **************************************************************************************************/

int Dice::rollDice() const{
	
	return (rand() % numSides) + 1;

}
//function for overloaded dice
/* int LoadedDice::rollDice() const{
	int sides;
	int call = (rand() % 2) + 1;
	if(call == 1)
	{
		sides = Dice::rollDice();
		return sides;
	}
	else
	{
		sides = numSides;
		return sides;
	}
}
 */

/**************************************************************************************************
 * <summary>	Roll more dice. </summary>
 *
 * <remarks>	Kayla, 2/21/2015. </remarks>
 *
 * <param name="numDie">	Number of dies. </param>
 *
 * <returns>	An int. </returns>
 **************************************************************************************************/

int Dice::rollMoreDice(int numDie)
{
	int total = 0;
	Dice* array = new Dice[numDie];
	
	for(int i = 0; i < numDie; i++)
	{
		total += array[i].rollDice();
	}

	delete [] array;
	
	return total;
	
} 