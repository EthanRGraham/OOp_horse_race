#include "race.h"
#include "horse.h"
#include <string>

const static int Numhorses = 5;

Race::Race(){
	Race::trackLength = Horse();
}

void Race::start(){
	bool keepGoing = true;
	
	while (keepGoing);{
		for (int i = 0; i < Numhorses; i++){
			advance (i, horses);
			printLane(i, horses);
			if (isWinner(i, horses) == true){
				keepGoing = false;
			}
		}
		std::cout << "press enter for another turn" << std::endl;
		std::cin.ignore();
	}
}//end start
 

