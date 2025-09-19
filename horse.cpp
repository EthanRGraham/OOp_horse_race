#include <string>
#include "horse.h"
#include <iostream>


//using namespace std;

//Constructor and greet are defined for Critter
Horse::Horse(){
  Horse::position = 0;
} // end constructor

Horse::Horse(){
	Horse::index = 0;
} // end
 
Horse::Horse(){
	Horse::TRACK_LENGTH = 15;
} //end 

void Horse::init(index, TRACK_LENGTH){
	Horse::index = index;
	Horse::TRACK_LENGTH = TRACK_LENGTH
}
void Horse::advance(){
	Horse::position += coin
} // end advance

void Horse::printLane(){
	for (int position = 0; position < TRACK_LENGTH; position++){
		if (position == index){
			std::cout << index;
		}
		else {
			std::cout << ".";
		}
	}//end printLane
std::bool Horse::isWinner(){
	bool result = false;
	if (horses[index] == TRACK_LENGTH){
		result = true;
		std::cout << "Horse" << index << "wins!!"
	}//end if
	return result;
}//end isWinner
