#ifndef DEMON_H
#define DEMON_H
#include "creature.h"

using namespace std;

class Demon : public Creature {
	public:
		Demon();
		int get_damage();
};

#endif
