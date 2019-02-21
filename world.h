#ifndef WORLD_H
#define WORLD_H
#include "creature.h"
#include "human.h"
#include "elf.h"
#include "demon.h"
#include "cyberdemon.h"
#include "balrog.h"
#include "centaur.h"
#include <string>

using namespace std;

class World {
	private:
		int bank;
		Human *h;
		Elf *e;
		Cyberdemon *c;
		Balrog *b;
		Centaur *cent;
		int num_h;
		int num_e;
		int num_c;
		int num_b;
		int num_cent;
	public:
		World();
		World(int, int, int, int, int, int);
		World(const World &);
		~World();
		void operator=(const World &);
		int get_bank();
		void set_bank(int);
		Elf* get_elf();
		Human* get_human();
		Cyberdemon* get_cyberdemon();
		Balrog* get_balrog();
		Centaur* get_centaur();
		int get_num_h();
		void set_num_h(int);
		int get_num_e();
		void set_num_e(int);
		int get_num_c();
		void set_num_c(int);
		int get_num_b();
		void set_num_b(int);
		int get_num_cent();
		void set_num_cent(int);
		void get_names(int, int, int, int, int);
		void subtract_bank(int, int, int, int, int, int);
		void is_valid_range(int &, int, int);
		int find_type();
		int find_creature(int, int, int, int, int, int);
		int battle(int, int);
		void battle_menu(int, int, int, int, int);
		void winner(int, int, int, int, int);
		void is_valid_pos_int(int &);
		void menu2(int &, int &, int &, int &, int &);
		void new_creatures();
		string name(int, int);
		int initial_hp(int, int);
		int hp(int, int, int);
		Human* remove_human(int, int, Human *);
		Human* add_human(int);
		Elf* remove_elf(int, int, Elf *);
		Elf* add_elf(int);
		Cyberdemon* remove_cyberdemon(int, int, Cyberdemon *);
		Cyberdemon* add_cyberdemon(int);
		Balrog* remove_balrog(int, int, Balrog *);
		Balrog* add_balrog(int);
		Centaur* remove_centaur(int, int, Centaur *);
		Centaur* add_centaur(int);
		void remove_creatures(int, int);
};

#endif
