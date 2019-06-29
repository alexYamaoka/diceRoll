CC = g++
FLAGS = -std=c++14 -Wall -g
#OBJS = object code not executable file
# OUT_EXE = .exe file name

all: diceRoll
diceRoll: diceRoll.cpp
	$(CC)	$(FLAGS)	diceRoll.cpp	-o	diceRoll

clean:
	rm	diceRoll	diceRoll.scr	diceRoll.tar

tar:
	tar	cf	diceRoll.tar	diceRoll.scr	Makefile	diceRoll.cpp	
