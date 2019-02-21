#ifndef CREATURE_H
#define CREATURE_H
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

class Creature {
	protected:
		int type;
		int strength;
		int hitpoints;
		string name;
		double payoff;
		double cost;
		string getSpecies();
	public:
		Creature();
		Creature(int, int, int);
		int get_type();
		void set_type(int);
		int get_strength();
		void set_strength(int);
		int get_hitpoints();
		void set_hitpoints(int);
		string get_name();
		void set_name(string);
		double get_payoff();
		void set_payoff(double);
		double get_cost();
		void set_cost(double);
		int getDamage();
};

#endif
