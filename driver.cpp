/****************************
 ** Program: driver.cpp
 ** Author: Jeremiah Kramer
 ** Date: 5/13/17
 ** Description: runs the creature game
 ** Input: ints, strings, etc
 ** Output: game
 ***************************/
#include "world.h"
#include "creature.h"
#include "elf.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//checks is its a valid input in range
void is_valid_int(int &choice){
	while (!cin || choice < 0) {
		cout << "Please enter a positive integer: ";
		cin.clear();
		cin.ignore();
		cin >> choice;
	}
}
//gets names of all creatures
void menu1(int &bank, int &hum, int &elf, int &cy, int &bal, int &cent) {
	cout << "Enter amount of money to start with: ";
	cin >> bank;
	is_valid_int(bank);
	cout << "How many Humans(10) do you want to buy?: ";
	cin >> hum;
	is_valid_int(hum);
	cout << "How many Elves(25) do you want to buy?: ";
	cin >> elf;
	is_valid_int(elf);
	cout << "How many Cyberdemons(100) do you want to buy?: ";
	cin >> cy;
	is_valid_int(cy);
	cout << "How many Balrogs(60) do you want to buy?: ";
	cin >> bal;
	is_valid_int(bal);
	cout << "How many Centaurs(50) do you want to buy?: ";
	cin >> cent;
	is_valid_int(cent);
}


int main () {
	int bank, num_h, num_e, num_c, num_b, num_cent;
	menu1(bank, num_h, num_e, num_c, num_b, num_cent);

	World w(bank, num_h, num_e, num_c, num_b, num_cent);

	cout << w.get_bank() << endl;
	w.subtract_bank(bank, num_h, num_e, num_c, num_b, num_cent);
	cout << w.get_bank() << endl;
	
	w.get_names(num_h, num_e, num_c, num_b, num_cent);

	w.winner(num_h, num_e, num_c, num_b, num_cent);
}
