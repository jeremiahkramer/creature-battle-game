/******************************************************
 ** Program: elf.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for elf.cpp
 ** Input: none
 ** Output: none
 *****************************************************/
#include "creature.h"
#include "elf.h"

using namespace std;

Elf::Elf() {
	set_type(3);
	set_strength(30);
	set_hitpoints(15);
	set_payoff(70);
	set_cost(25);
}
/*****************************
 ** Function: get_damage
 ** Description: returns damage, specific to elves
 ** Parameters: none
 ** Pre- Conditions: battle
 ** Post- Conditions: damage int
 ** Return: int
 ****************************/
int Elf::get_damage() {
	int damage = getDamage();
	srand(time(NULL));
	if ((rand() % 10) == 0) {
		cout << "Magical attack inflicts " << damage << " additional damage points!" << endl;
		damage = damage * 2;
	}
	return damage;
}
