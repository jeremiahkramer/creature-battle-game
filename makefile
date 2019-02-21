CC = g++
exe_file = driver
$(exe_file): world.cpp creature.cpp human.cpp elf.cpp demon.cpp cyberdemon.cpp balrog.cpp centaur.cpp driver.cpp
	$(CC) -g world.cpp creature.cpp human.cpp elf.cpp demon.cpp cyberdemon.cpp balrog.cpp centaur.cpp driver.cpp -o driver
