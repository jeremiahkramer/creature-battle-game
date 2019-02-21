#ifndef CENTAUR_H
#define CENTAUR_H
#include "creature.h"

using namespace std;

class Centaur : public Creature {
	public:
		Centaur();
		int get_damage();
};

#endif
