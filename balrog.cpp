/******************************************************
 ** Program: balrog.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for balrog.cpp
 ** Input: none
 ** Output: none
 *****************************************************/
#include "demon.h"
#include "balrog.h"

using namespace std;

Balrog::Balrog() {
	set_type(2);
	set_strength(20);
	set_hitpoints(75);
	set_payoff(20);
	set_cost(60);
}
/*****************************
 ** Function: get_damage_
 ** Description: returns damage, specific to balrogs
 ** Parameters: none
 ** Pre- Conditions: battle
 ** Post- Conditions: damage int
 ** Return: int
 ****************************/
int Balrog::get_damage_() {
	int damage = get_damage();
	srand(time(NULL));
	int damage2 = (rand() % strength) + 1;
	cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
	damage = damage + damage2;
	return damage;
}
