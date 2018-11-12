#include <Jumping.h>
#include <Climbing.h>
#include <Idle.h>
#include "Hammering.h"
#include "Shovelling.h"
#include "Swordsmanship.h"
#include "Walking.h"

#include <string>

void Jumping::handleInput()
{
}

void Jumping::update()
{
}

void Jumping::idle(PlayerFSM* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	a->setPrevious(new Jumping());
	delete this;
}
void Jumping::climbing(PlayerFSM* a)
{
	std::cout << "Jumping -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Jumping());
	delete this;
}

void Jumping::swordsmanship(PlayerFSM * a)
{
	std::cout << "Cannot sword from jumping" << std::endl;
}

void Jumping::walking(PlayerFSM * a)
{
	std::cout << "Cannot walk from jumping" << std::endl;
}

void Jumping::shovelling(PlayerFSM * a)
{
	std::cout << "Cannot shovel from jumping" << std::endl;
}

void Jumping::hammering(PlayerFSM * a)
{
	std::cout << "Cannot hammer from jumping" << std::endl;
}
