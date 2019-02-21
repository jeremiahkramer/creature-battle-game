/******************************************************
 ** Program: centaur.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for centaur.cpp
 ** Input: none
 ** Output: none
 *****************************************************/
#include "creature.h"
#include "centaur.h"

using namespace std;

Centaur::Centaur() {
	set_type(4);
	set_strength(45);
	set_hitpoints(40);
	set_payoff(15);
	set_cost(50);
}
/*****************************
 ** Function: get_damage
 ** Description: returns damage, specific to centaurs
 ** Parameters: none
 ** Pre- Conditions: battle
 ** Post- Conditions: damage int
 ** Return: int
 ****************************/
int Centaur::get_damage() {
	int damage = getDamage();
	srand(time(NULL));
	if ((rand() % 100) < 10) { //10% chance at special attack
		damage = damage + 25;
		cout << "Centaur hind kick inflicts 25 additional points!" << endl;
	}
	return damage;
}
