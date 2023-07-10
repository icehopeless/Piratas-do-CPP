all: compile link run

compile:
	g++ -g -c main.cpp
	g++ -g -c Menu.cpp
	g++ -g -c Game.cpp

link:
	g++ main.o -o main Menu.o Game.o -lsfml-audio -lsfml-graphics -lsfml-window -lsfml-system
	
	
run:
	./main