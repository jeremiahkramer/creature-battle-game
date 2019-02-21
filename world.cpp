/******************************************************
 ** Program: world.cpp
 ** Author: Jeremiah Kamer
 ** Date: 05/13/2017
 ** Description: function definitions for world.cpp
 ** Input: ints, creature names, bank, etc.
 ** Output: game
 *****************************************************/
#include "world.h"

using namespace std;

/*****************************
 ** Function: world default constructor
 ** Description: will intialize everything to 0/ NULL when object is created
 ** Parameters: none
 ** Pre- Conditions: none
 ** Post- Conditions: Object initialized to NULL/0
 ** Return: none
 ****************************/
World::World() {
	bank = 0;
	h = NULL;
	e = NULL;
	c = NULL;
	b = NULL;
	cent = NULL;
	num_h = 0;
	num_e = 0;
	num_c = 0;
	num_b = 0;
	num_cent = 0;
}
/*****************************
 ** Function: world non-default constructor
 ** Description: will intialize everything to certain parameter values when object is created
 ** Parameters: int, int, int, int, int, int
 ** Pre- Conditions: none
 ** Post- Conditions: Object initialized to certain ints
 ** Return: none
 ****************************/
World::World(int newBank, int num_h, int num_e, int num_c, int num_b, int num_cent) {
	bank = newBank;
	this->num_h = num_h;
	this->num_e = num_e;
	this->num_c = num_c;
	this->num_b = num_b;
	this->num_cent = num_cent;
	if (num_h == 0)
		h = NULL;
	else if (num_h > 0)
		h = new Human[num_h];
	if (num_e == 0)
		e = NULL;
	else if (num_e > 0)
		e = new Elf[num_e];
	if (num_c == 0)
		c = NULL;
	else if (num_c > 0)
		c = new Cyberdemon[num_c];
	if (num_b == 0)
		b = NULL;
	else if (num_b > 0)
		b = new Balrog[num_b];
	if (num_cent == 0)
		cent = NULL;
	else if (num_cent > 0)
		cent = new Centaur[num_cent];
}
/*****************************
 ** Function: world copy constructor
 ** Description: will intialize everything to same thing as object passed in
 ** Parameters: none
 ** Pre- Conditions: other object created
 ** Post- Conditions: Object initialized to other contents
 ** Return: none
 ****************************/
World::World(const World &other) {
	bank = other.bank;
	num_h = other.num_h;
	if (other.num_h == 0)
		h = NULL;
	else
		h = new Human[num_h];
	num_e = other.num_e;
	if (num_e == 0)
		e = NULL;
	else
		e = new Elf[num_e];
	num_c = other.num_c;
	if (num_c == 0)
		c = NULL;
	else
		c = new Cyberdemon[num_c];
	num_b = other.num_b;
	if (num_b == 0)
		b = NULL;
	else
		b = new Balrog[num_b];
	num_cent = other.num_cent;
	if (num_cent == 0)
		cent = NULL;
	else
		cent = new Centaur[num_cent];
}
/*****************************
 ** Function: world destructor
 ** Description: will free everything
 ** Parameters: none
 ** Pre- Conditions: memory alloc on heap
 ** Post- Conditions: memory freed
 ** Return: none
 ****************************/
World::~World() {
	if (num_h == 0)
		h = NULL;
	else
		delete [] h;
	if (num_e == 0)
		e = NULL;
	else
		delete [] e;
	if (num_c == 0)
		c = NULL;
	else
		delete [] c;
	if (num_b == 0)
		b = NULL;
	else 
		delete [] b;
	if (num_cent == 0)
		cent = NULL;
	else 
		delete [] cent;
}
/*****************************
 ** Function: world assignment overload
 ** Description: will copy contents of one object to the other
 ** Parameters: none
 ** Pre- Conditions: object already created
 ** Post- Conditions: two of the same object contents
 ** Return: none
 ****************************/
void World::operator=(const World &other) {
	bank = other.bank;
	
	if (num_h == 0)
		h = NULL;
	else
		delete [] h;
	if (num_e == 0)
		e = NULL;
	else
		delete [] e;
	if (num_c == 0)
		c = NULL;
	else
		delete [] c;
	if (num_b == 0)
		b = NULL;
	else 
		delete [] b;
	if (num_cent == 0)
		cent = NULL;
	else 
		delete [] cent;
	
	num_h = other.num_h;
	num_e = other.num_e;
	num_c = other.num_c;
	num_b = other.num_b;
	num_cent = other.num_cent;
	if (other.num_h == 0)
		h = NULL;
	else
		h = new Human[num_h];
	if (num_e == 0)
		e = NULL;
	else
		e = new Elf[num_e];
	if (num_c == 0)
		c = NULL;
	else
		c = new Cyberdemon[num_c];
	if (num_b == 0)
		b = NULL;
	else
		b = new Balrog[num_b];
	if (num_cent == 0)
		cent = NULL;
	else
		cent = new Centaur[num_cent];
}
/*****************************
 ** Function: accessors and mutators
 ** Description: getters return private member, setters set private member
 ** Parameters: none/int/string,etc.
 ** Pre- Conditions: members
 ** Post- Conditions: new values or returned members
 ** Return: none/int/string, etc.
 ****************************/
int World::get_bank() {
	return bank;
}
void World::set_bank(int b) {
	bank = b;
}
Elf* World::get_elf() {
	return e;
}
Human* World::get_human() {
	return h;
}
Cyberdemon* World::get_cyberdemon() {
	return c;
}
Balrog* World::get_balrog() {
	return b;
}
Centaur* World::get_centaur() {
	return cent;
}
int World::get_num_h() {
	return num_h;
}
void World::set_num_h(int h) {
	num_h = h;
}
int World::get_num_e() {
	return num_e;
}
void World::set_num_e(int e) {
	num_e = e;
}
int World::get_num_c() {
	return num_c;
}
void World::set_num_c(int c) {
	num_c = c;
}
int World::get_num_b() {
	return num_b;
}
void World::set_num_b(int b) {
	num_b = b;
}
int World::get_num_cent() {
	return num_cent;
}
void World::set_num_cent(int cent) {
	num_cent = cent;
}
/*****************************
 ** Function: get_names
 ** Description: gets the names for all the creatures put into the world
 ** Parameters: int, int, int, int, int
 ** Pre- Conditions: creatures put into world
 ** Post- Conditions: names for creatures
 ** Return: none
 ****************************/
void World::get_names(int num_h, int num_e, int num_c, int num_b, int num_cent) {
	//get names for all new creatures put into world
	string name;
	if (num_h != 0){
		for (int i = 0; i < num_h; i++){
			cout << "Enter name for human " << i + 1 << ": ";
			cin >> name;
			h[i].set_name(name);
		}
	}
	if (num_e != 0){
		for (int i = 0; i < num_e; i++){
			cout << "Enter name for elf " << i + 1 << ": ";
			cin >> name;
			e[i].set_name(name);
		}
	}
	if (num_c != 0){
		for (int i = 0; i < num_c; i++){
			cout << "Enter name for cyberdemon " << i + 1 << ": ";
			cin >> name;
			c[i].set_name(name);
		}
	}
	if (num_b != 0){
		for (int i = 0; i < num_b; i++){
			cout << "Enter name for balrog " << i + 1 << ": ";
			cin >> name;
			b[i].set_name(name);
		}
	}
	if (num_cent != 0){
		for (int i = 0; i < num_cent; i++){
			cout << "Enter name for centaur " << i + 1 << ": ";
			cin >> name;
			cent[i].set_name(name);
	}
	}
}
/*****************************
 ** Function: subtract_bank
 ** Description: subtracts the bank after the creatures are bought
 ** Parameters: int, int, int, int, int, int
 ** Pre- Conditions: bank value
 ** Post- Conditions: new bank value
 ** Return: none
 ****************************/
void World::subtract_bank(int b, int num_h, int num_e, int num_c, int num_b, int num_cent) {
	this->bank = b - (num_h*10 + num_e*25 + num_c*100 + num_b*60 + num_cent*50);
}
/*****************************
 ** Function: is_valid_range
 ** Description: checks if ints are ints and if they're in range
 ** Parameters: int &, int, int
 ** Pre- Conditions: int to check
 ** Post- Conditions: int in range
 ** Return: none
 ****************************/
void World::is_valid_range(int &choice, int low, int high) {
	while (!cin || choice > high || choice < low) {
		cout << "Please enter a valid integer between " << low << " and " << high << ": ";
		cin.clear(); //clear input
		cin.ignore();
		cin >> choice; //choice is a reference
	}
}
/*****************************
 ** Function: find_type
 ** Description: finds the type of the creature 
 ** Parameters: none
 ** Pre- Conditions: creatures put into world
 ** Post- Conditions: a type (int) to search certain arrays
 ** Return: int
 ****************************/
int World::find_type() {
	//get type of creature
	int type = 0;
	cout << "Enter the type of creature (Human = 0, Cyberdemon = 1, Balrog = 2, Elf = 3, Centaur = 4): ";
	cin >> type;
	is_valid_range(type, 0, 4);
	return type;
}
/*****************************
 ** Function: find_creature
 ** Description: finds the creature based on type and their name
 ** Parameters: int, int, int, int, int, int
 ** Pre- Conditions: creatures put into world
 ** Post- Conditions: we now found certain creatures we can battle with
 ** Return: int
 ****************************/
int World::find_creature(int type, int num_h, int num_e, int num_c, int num_b, int num_cent) {
	//ask for the name and put it into that specific creatures name
	//print if name not found
	string name;
	cout << "Enter the name of the creature: ";
	cin >> name;
	if (type == 0){
		for (int i = 0; i < num_h; i++){
			if (h[i].get_name() == name){
				return i;
			}
		}
		cout << "You don't have a creature with that name!" << endl;
	}
	if (type == 1){
		for (int i = 0; i < num_c; i++){
			if (c[i].get_name() == name){
				return i;
			}	
		}
		cout << "You don't have a creature with that name!" << endl;
	}
	if (type == 2){
		for (int i = 0; i < num_b; i++){
			if (b[i].get_name() == name){
				return i;
			}
		}
		cout << "You don't have a creature with that name!" << endl;
	}
	if (type == 3){
		for (int i = 0; i < num_e; i++){
			if (e[i].get_name() == name){
				return i;
			}
		}
		cout << "You don't have a creature with that name!" << endl;
	}
	if (type == 4){
		for (int i = 0; i < num_cent; i++){
			if (cent[i].get_name() == name){
				return i;
			}
		}
		cout << "You don't have a creature with that name!" << endl;
	}
}
/*****************************
 ** Function: battle
 ** Description: gets the damage dealt from creature
 ** Parameters: int, int
 ** Pre- Conditions: creatures found to battle with
 ** Post- Conditions: damage dealt from creature
 ** Return: int
 ****************************/
int World::battle(int type, int index) {
	int dam;
	//corresponding types
	if (type == 0){
		dam = h[index].getDamage();
	}
	if (type == 1){
		dam = c[index].get_damage();
	}
	if (type == 2){
		dam = b[index].get_damage_();
	}
	if (type == 3){
		dam = e[index].get_damage();
	}
	if (type == 4){
		dam = cent[index].get_damage();
	}
	return dam;	
}
/*****************************
 ** Function: battle_menu
 ** Description: One round of battling
 ** Parameters: int, int, int, int, int
 ** Pre- Conditions: creatures to battle with and damage function
 ** Post- Conditions: One creature a winner, the other is dead and removed from the array
 ** Return: none
 ****************************/
void World::battle_menu(int num_h, int num_e, int num_c, int num_b, int num_cent) {
	cout << "Time to battle!" << endl;
	cout << "Enter two creatures to battle against each other. " << endl;
	int type1 = find_type();
	int index1 = find_creature(type1, num_h, num_e, num_c, num_b, num_cent);
	int type2 = find_type();
	int index2 = find_creature(type2, num_h, num_e, num_c, num_b, num_cent);
	int dam1, dam2, hp1 = initial_hp(type1, index1), hp2 = initial_hp(type2, index2);
	//two different creatures to get
	bool check = false;
	while (check == false){	
		dam1 = battle(type1, index1); //damage dealt
		hp2 = hp(type2, index2, dam1); //take off hp
		if (hp2 < 1){ //if they die
			cout << name(type1, index1) << " wins!" << endl; //print winner
			check = true; //stop loop
			remove_creatures(type2, index2); //remove dead creature
		}
		else {
			dam2 = battle(type2, index2);
			hp1 = hp(type1, index1, dam2);
		if (hp1 < 1){
			cout << name(type2, index2) << " wins!" << endl;
			check = true;
			remove_creatures(type1, index1);
		}
		}
	}
}
/*****************************
 ** Function: winner
 ** Description: culminationg function that prints out the winner of all the battles and adjusts the bank accordingly
 ** Parameters: int, int, int, int, int
 ** Pre- Conditions: battle function, remove function, add function, subtract bank function
 ** Post- Conditions: Last creature standing. game over
 ** Return: none
 ****************************/
void World::winner(int num_h, int num_e, int num_c, int num_b, int num_cent) {
	int total_creatures = this->num_h + this->num_e + this->num_c + this->num_b + this->num_cent;
	while (total_creatures > 1){ //while there is more than 1 total creatures left
		battle_menu(num_h, num_e, num_c, num_b, num_cent); //call battle round
		if (this->num_h == 1 && this->num_e == 0 && this->num_c == 0 && this->num_b == 0 && this->num_cent == 0){
			cout << "Human " << this->h[0].get_name() << " is the winner!" << endl;
			this->bank += this->h[0].get_payoff();
			//human is the winner, add to their bank from payoff
		}
		if (this->num_h == 0 && this->num_e == 1 && this->num_c == 0 && this->num_b == 0 && this->num_cent == 0){
			cout << "Elf " << this->e[0].get_name() << " is the winner!" << endl;
			this->bank += this->e[0].get_payoff();
		}
		if (this->num_h == 0 && this->num_e == 0 && this->num_c == 1 && this->num_b == 0 && this->num_cent == 0){
			cout << "Cyberdemon " << this->c[0].get_name() << " is the winner!" << endl;
			this->bank += this->c[0].get_payoff();
		}
		if (this->num_h == 0 && this->num_e == 0 && this->num_c == 0 && this->num_b == 1 && this->num_cent == 0){
			cout << "Balrog " << this->b[0].get_name() << " is the winner!" << endl;
			this->bank += this->b[0].get_payoff();
		}
		if (this->num_h == 0 && this->num_e == 0 && this->num_c == 0 && this->num_b == 0 && this->num_cent == 1){
			cout << "Centaur " << this->cent[0].get_name() << " is the winner!" << endl;
			this->bank += this->cent[0].get_payoff();
		}
		else{
			new_creatures();
		}
		total_creatures = (this->num_h + this->num_e + this->num_c + this->num_b + this->num_cent);
	}
	cout << "Payout = " << get_bank() << endl;
}
/*****************************
 ** Function: is_valid_pos_int
 ** Description: checks if int is pos and valid
 ** Parameters: int &
 ** Pre- Conditions: int to check
 ** Post- Conditions: valid, pos int
 ** Return: none
 ****************************/
void World::is_valid_pos_int(int &choice){
	while (!cin || choice < 0) {
		cout << "Please enter a positive integer: ";
		cin.clear(); //clear input
		cin.ignore();
		cin >> choice; //choice is a reference so it can be changed
	}
}
/*****************************
 ** Function: menu2
 ** Description: gets how many of each creature user wants to buy mid game
 ** Parameters: int &, int &, int &, int &, int &
 ** Pre- Conditions: add creature func
 ** Post- Conditions: amount of new creatures bought
 ** Return: none
 ****************************/
void World::menu2(int &hum, int &elf, int &cy, int &bal, int &cent) {
	hum = 0, elf = 0, cy = 0, bal = 0, cent = 0;
	cout << "How many Humans(10) do you want to buy?: ";
	cin >> hum;
	is_valid_pos_int(hum);
	cout << "How many Elves(25) do you want to buy?: ";
	cin >> elf;
	is_valid_pos_int(elf);
	cout << "How many Cyberdemons(100) do you want to buy?: ";
	cin >> cy;
	is_valid_pos_int(cy);
	cout << "How many Balrogs(60) do you want to buy?: ";
	cin >> bal;
	is_valid_pos_int(bal);
	cout << "How many Centaurs(50) do you want to buy?: ";
	cin >> cent;
	is_valid_pos_int(cent);
	
	subtract_bank(this->bank, hum, elf, cy, bal, cent); //subtract the bank from purchases
}
/*****************************
 ** Function: new_creatures
 ** Description: asks if user wants to buy new creatures
 ** Parameters: none
 ** Pre- Conditions: round over
 ** Post- Conditions: new creatures in world
 ** Return: none
 ****************************/
void World::new_creatures() {
	int choice, hum, elf, cy, bal, cent;
	cout << "Do you want to buy new creatures? (0-no, 1-yes): ";
	cin >> choice;
	is_valid_range(choice, 0, 1); //error handle
	if (choice == 1){
		menu2(hum, elf, cy, bal, cent); //call menu2 to get amount to buy
		if (hum > 0){
			this->h = add_human(hum); //add human and set new array to this->h
			this->num_h += hum; //new creature number
		}
		if (elf > 0){
			this->e = add_elf(elf);
			this->num_e += elf;
		}
		if (cy > 0){
			this->c = add_cyberdemon(cy);
			this->num_c += cy;
		}
		if (bal > 0){
			this->b = add_balrog(bal);
			this->num_b += bal;
		}
		if (cent > 0){
			this->cent = add_centaur(cent);
			this->num_cent += cent;
		}
	}
}
/*****************************
 ** Function: name
 ** Description: gets name of certain creature
 ** Parameters: int, int
 ** Pre- Conditions: creatures made
 ** Post- Conditions: access to specific creature name
 ** Return: string
 ****************************/
string World::name(int type, int index) {
	//we know the types
	if (type == 0){
		return h[index].get_name();
	}
	if (type == 1){
		return c[index].get_name();
	}
	if (type == 2){
		return b[index].get_name();
	}
	if (type == 3){
		return e[index].get_name();
	}
	if (type == 4){
		return cent[index].get_name();
	}
}
/*****************************
 ** Function: initial_hp
 ** Description: gets initial hp of certain creature
 ** Parameters: int, int
 ** Pre- Conditions: creatures made
 ** Post- Conditions: access to specific creature hp
 ** Return: int
 ****************************/
int World::initial_hp(int type, int index) {
	int hp;
	if (type == 0){ //human
		hp = h[index].get_hitpoints();
	}
	if (type == 1){ //cybder
		hp = c[index].get_hitpoints();
	}
	if (type == 2){ //balrog
		hp = b[index].get_hitpoints();
	}
	if (type == 3){ //elf
		hp = e[index].get_hitpoints();
	}
	if (type == 4){ //centaur
		hp = cent[index].get_hitpoints();
	}
	return hp;
}
/*****************************
 ** Function: hp
 ** Description: gets hp of a creature after it has been attacked
 ** Parameters: int, int, int
 ** Pre- Conditions: creature attack
 ** Post- Conditions: new creature hp
 ** Return: int
 ****************************/
int World::hp(int type, int index, int dam) {
	int hp;
	if (type == 0){
		hp = h[index].get_hitpoints(); //get the iniitial hp
		hp = hp - dam; //subtract from damage dealt
		h[index].set_hitpoints(hp);
		cout << "Human: " << h[index].get_name() << " hp: " << hp << endl; //print out their hp
	}
	if (type == 1){
		hp = c[index].get_hitpoints();
		hp = hp - dam;
		c[index].set_hitpoints(hp);
		cout << "Cyberdemon: " << c[index].get_name() << " hp: " << hp << endl;
	}
	if (type == 2){
		hp = b[index].get_hitpoints();
		hp = hp - dam;
		b[index].set_hitpoints(hp);
		cout << "Balrog: " << b[index].get_name() << " hp: " << hp << endl;
	}
	if (type == 3){
		hp = e[index].get_hitpoints();
		hp = hp - dam;
		e[index].set_hitpoints(hp);
		cout << "Elf: " << e[index].get_name() << " hp: " << hp << endl;
	}
	if (type == 4){
		hp = cent[index].get_hitpoints();
		hp = hp - dam;
		cent[index].set_hitpoints(hp);
		cout << "Centaur: " << cent[index].get_name() << " hp: " << hp << endl;
	}
	return hp; //return hp
}
/*****************************
 ** Function: remove_human
 ** Description: removes dead human from world
 ** Parameters: int, int, human *
 ** Pre- Conditions: humans put into world
 ** Post- Conditions: humans removed from human array
 ** Return: human*
 ****************************/
Human* World::remove_human(int type, int index, Human *h) {
	if (this->num_h - 1 == 0){ //if it's the last creature, delete the whole array
		delete [] h;
		this->num_h = 0;
		return NULL;
	}
	else{
		Human *temp = new Human[this->num_h - 1]; //make a smaller array
		int count = 0;
		for (int i = 0; i < this->num_h; i++){
			if (i != index){ //skip over dead creature when copying array
				temp[count] = h[i];
				count++; //count instead of i
			}
		}
		this->num_h = this->num_h - 1;
		delete [] h;
		return temp;
	}
}
/*****************************
 ** Function: add_human
 ** Description: adds human to world
 ** Parameters: int
 ** Pre- Conditions: human bought
 ** Post- Conditions: bigger human array
 ** Return: human*
 ****************************/
Human* World::add_human(int num) {
	string name, name1;
	Human *temp = new Human[this->num_h + num]; //new sized array
	for (int i = 0; i < this->num_h; i++){ //set creatures that are still alive to th    is array
		name1 = this->h[i].get_name();
		temp[i].set_name(name1);
	}
	for (int i = this->num_h; i < this->num_h + num; i++){ //set new creature names for the new creatures
		cout << "Enter name for human " << i + 1 << ": ";
		cin >> name;
		temp[i].set_name(name);
	}
	delete [] h; //delete array i referenced
	return temp; //return new array
}
//note: the following functions are the exact same but with different creatures. I feel I don't have to comment on each function. Take these comments and apply them to the following functions
/*****************************
 ** Function: remove_elf
 ** Description: removes dead elf from world
 ** Parameters: int, int, elf *
 ** Pre- Conditions: elves put into world
 ** Post- Conditions: elves removed from elf array
 ** Return: elf*
 ****************************/
Elf* World::remove_elf(int type, int index, Elf *e) {
	if (this->num_e - 1 == 0){
		delete [] e;
		this->num_e = 0;
		return NULL;
	}
	else{
		Elf *temp = new Elf[this->num_e - 1];
		int count = 0;
		for (int i = 0; i < this->num_e; i++){
			if (i != index){
				temp[count] = e[i];
				count++;
			}
		}
		this->num_e = this->num_e - 1;
		delete [] e;
		return temp;
	}
}
/*****************************
 ** Function: add_elf
 ** Description: adds elves to world
 ** Parameters: int
 ** Pre- Conditions: elf bought
 ** Post- Conditions: bigger elf array
 ** Return: elf*
 ****************************/
Elf* World::add_elf(int num) {
	string name, name1;
	Elf *temp = new Elf[this->num_e + num];
	for (int i = 0; i < this->num_e; i++){
		name1 = this->e[i].get_name();
		temp[i].set_name(name1);
	}
	for (int i = this->num_e; i < this->num_e + num; i++){
		cout << "Enter name for elf " << i + 1 << ": ";
		cin >> name;
		temp[i].set_name(name);
	}
	delete [] e;
	return temp;
}
/*****************************
 ** Function: remove_cyberdemon
 ** Description: removes dead cyberdemon from world
 ** Parameters: int, int, cyberdemon *
 ** Pre- Conditions: cyberdemons put into world
 ** Post- Conditions: cyberdemons removed from cyberdemon array
 ** Return: cyberdemon*
 ****************************/
Cyberdemon* World::remove_cyberdemon(int type, int index, Cyberdemon *c) {
	if (this->num_c - 1 == 0){
		delete [] c;
		this->num_c = 0;
		return NULL;
	}
	else{
		Cyberdemon *temp = new Cyberdemon[this->num_c - 1];
		int count = 0;
		for (int i = 0; i < this->num_c; i++){
			if (i != index){
				temp[count] = c[i];
				count++;
			}
		}
		this->num_c = this->num_c - 1;
		delete [] c;
		return temp;
	}
}
/*****************************
 ** Function: add_cyberdemon
 ** Description: adds cyberdemon to world
 ** Parameters: int
 ** Pre- Conditions: cyberdemon bought
 ** Post- Conditions: bigger cyberdemon array
 ** Return: cyberdemon*
 ****************************/
Cyberdemon* World::add_cyberdemon(int num) {
	string name, name1;
	Cyberdemon *temp = new Cyberdemon[this->num_c + num];
	for (int i = 0; i < this->num_c; i++){
		name1 = this->c[i].get_name();
		temp[i].set_name(name1);
	}
	for (int i = this->num_c; i < this->num_c + num; i++){
		cout << "Enter name for cyberdemon " << i + 1 << ": ";
		cin >> name;
		temp[i].set_name(name);
	}
	delete [] c;
	return temp;
}
/*****************************
 ** Function: remove_balrog
 ** Description: removes dead balrog from world
 ** Parameters: int, int, balrog *
 ** Pre- Conditions: balrogs put into world
 ** Post- Conditions: balrogs removed from balrog array
 ** Return: balrog*
 ****************************/
Balrog* World::remove_balrog(int type, int index, Balrog *b) {
	if (this->num_b - 1 == 0){
		delete [] b; 
		this->num_b = 0;
		return NULL;
	}
	else{
		Balrog *temp = new Balrog[this->num_b - 1];
		int count = 0;
		for (int i = 0; i < this->num_b; i++){
			if (i != index){
				temp[count] = b[i];
				count++;
			}
		}
		this->num_b = this->num_b - 1;
		delete [] b;
		return temp;
	}
}
/*****************************
 ** Function: add_balrog
 ** Description: adds balrog to world
 ** Parameters: int
 ** Pre- Conditions: balrog bought
 ** Post- Conditions: bigger balrog array
 ** Return: balrog*
 ****************************/
Balrog* World::add_balrog(int num) {
	string name, name1;
	Balrog *temp = new Balrog[this->num_b + num];
	for (int i = 0; i < this->num_b; i++){
		name1 = this->b[i].get_name();
		temp[i].set_name(name1);
	}
	for (int i = this->num_b; i < this->num_b + num; i++){
		cout << "Enter name for balrog " << i + 1 << ": ";
		cin >> name;
		temp[i].set_name(name);
	}
	delete [] b;
	return temp;
}
/*****************************
 ** Function: remove_centaur
 ** Description: removes dead centaur from world
 ** Parameters: int, int, centaur *
 ** Pre- Conditions: centaurs put into world
 ** Post- Conditions: centaurs removed from centaur array
 ** Return: centaur*
 ****************************/
Centaur* World::remove_centaur(int type, int index, Centaur *cent) {
	if (this->num_cent - 1 == 0){
		delete [] cent;
		this->num_cent = 0;
		return NULL;
	}
	else{
		Centaur *temp = new Centaur[this->num_cent - 1];
		int count = 0;
		for (int i = 0; i < this->num_cent; i++){
			if (i != index){
				temp[count] = cent[i];
				count++;
			}
		}
		this->num_cent = this->num_cent - 1;
		delete [] cent;
		return temp;
	}
}
/*****************************
 ** Function: add_centaur
 ** Description: adds centaur to world
 ** Parameters: int
 ** Pre- Conditions: centaur bought
 ** Post- Conditions: bigger centaur array
 ** Return: centaur*
 ****************************/
Centaur* World::add_centaur(int num) {
	string name, name1;
	Centaur *temp = new Centaur[this->num_cent + num]; 
	for (int i = 0; i < this->num_cent; i++){ 
		name1 = this->cent[i].get_name(); 
		temp[i].set_name(name1);
	}
	for (int i = this->num_cent; i < this->num_cent + num; i++){ 
		cout << "Enter name for centaur " << i + 1 << ": ";
		cin >> name;
		temp[i].set_name(name);
	}
	delete [] cent;
	return temp;
}
/*****************************
 ** Function: remove_creatures
 ** Description: removes dead creatures from world
 ** Parameters: int, int
 ** Pre- Conditions: creatures die from battling
 ** Post- Conditions: smaller arrays
 ** Return: none
 ****************************/
void World::remove_creatures(int type, int index) {
	if (type == 0){ //human type 0
		h = remove_human(type, index, h);
	}
	if (type == 1){ //cyber
		c = remove_cyberdemon(type, index, c);
	}
	if (type == 2){ //balrog
		b = remove_balrog(type, index, b);
	}
	if (type == 3){ //elf
		e = remove_elf(type, index, e);
	}
	if (type == 4){ //centaur
		cent = remove_centaur(type, index, cent);
	}
}

