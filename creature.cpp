/******************************************************
 ** Program: creature.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for creature.cpp
 ** Input: none
 ** Output: none
 *****************************************************/
#include "creature.h"

using namespace std;

/*****************************
 ** Function: getSpecies
 ** Description: returns name of species based on type
 ** Parameters: none
 ** Pre- Conditions: creature
 ** Post- Conditions: name of creature species
 ** Return: string
 ****************************/
string Creature::getSpecies() {
	switch(type) {
		case 0: return "Human";
		case 1: return "Cyberdemon";
		case 2: return "Balrog";
		case 3: return "Elf";
		case 4: return "Centaur";
	}
	return "Unknown";
}
/*****************************
 ** Function: creature default constructor
 ** Description: will intialize everything to 0/ NULL when object is created
 ** Parameters: none
 ** Pre- Conditions: none
 ** Post- Conditions: Object initialized to NULL/0
 ** Return: none
 ****************************/
Creature::Creature() {
	type = 0;
	strength = 10;
	hitpoints = 10;
	payoff = 100;
	cost = 10;
}
/*****************************
 ** Function: creature non-default constructor
 ** Description: will intialize everything to specific contents when object is created
 ** Parameters: int, int, int
 ** Pre- Conditions: none
 ** Post- Conditions: Object initialized to specific contents
 ** Return: none
 ****************************/
Creature::Creature(int newType, int newStr, int newHit) {
	type = newType;
	strength = newStr;
	hitpoints = newHit;
}
int Creature::get_type() {
	return type;
}
void Creature::set_type(int newType) {
	type = newType;
}
int Creature::get_strength() {
	return strength;
}
void Creature::set_strength(int newStr) {
	strength = newStr;
}
int Creature::get_hitpoints() {
	return hitpoints;
}
void Creature::set_hitpoints(int newHit) {
	hitpoints = newHit;
}
string Creature::get_name() {
	return name;
}
void Creature::set_name(string newName) {
	name = newName;
}
double Creature::get_payoff() {
	return payoff;
}
void Creature::set_payoff(double newPayoff) {
	payoff = newPayoff;
}
double Creature::get_cost() {
	return cost;
}
void Creature::set_cost(double newCost) {
	cost = newCost;
}
/*****************************
 ** Function: getDamage
 ** Description: returns damage
 ** Parameters: none
 ** Pre- Conditions: battle
 ** Post- Conditions: damage int
 ** Return: int
 ****************************/
int Creature::getDamage() {
	int damage;
	srand(time(NULL));
	damage = rand() % strength;
	cout << getSpecies() << ": " << name << " attacks for " << damage << " points!" << endl;
	return damage;
}
