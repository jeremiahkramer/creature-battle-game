#ifndef ELF_H
#define ELF_H
#include "creature.h"

using namespace std;

class Elf : public Creature {
	public:
		Elf();
		int get_damage();
};

#endif
