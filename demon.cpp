/******************************************************
 ** Program: demon.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for demon.cpp
 ** Input: none
 ** Output: none
 *****************************************************/
#include "creature.h"
#include "demon.h"

using namespace std;

Demon::Demon() {
	set_type(1);
	set_strength(70);
	set_hitpoints(80);
	set_payoff(10);
	set_cost(100);
}
/*****************************
 ** Function: get_damage
 ** Description: returns damage, specific to demons
 ** Parameters: none
 ** Pre- Conditions: battle
 ** Post- Conditions: damage int
 ** Return: int
 ****************************/
int Demon::get_damage() {
	int damage = getDamage();
	srand(time(NULL));
	if ((rand() % 100) < 5) {
		damage = damage + 50;
		cout << "Demonic attack inflicts 50 additional damage points!" << endl;
	}
	return damage;
}
