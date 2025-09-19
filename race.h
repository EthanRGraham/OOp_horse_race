#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		const int TRACK_LEGTH = 15;
		const static int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];

	public:
		Race();
		void start();
}; //end race class deff
