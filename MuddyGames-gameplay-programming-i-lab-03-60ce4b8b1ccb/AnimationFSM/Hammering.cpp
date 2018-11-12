#include "Hammering.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Swordsmanship.h"
#include "Walking.h"
#include "Shovelling.h"
#include "Idle.h"

void Hammering::handleInput()
{
}

void Hammering::update()
{
}

void Hammering::idle(PlayerFSM * a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Idle());
	a->setPrevious(new Hammering());
	delete this;
}

void Hammering::jumping(PlayerFSM * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Hammering());
	delete this;
}

void Hammering::climbing(PlayerFSM * a)
{
	std::cout << "hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Hammering());
	delete this;
}

void Hammering::swordsmanship(PlayerFSM * a)
{
	std::cout << "hammering -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	a->setPrevious(new Hammering());
	delete this;
}

void Hammering::walking(PlayerFSM * a)
{
	std::cout << "Hammering -> Walking" << std::endl;
	a->setCurrent(new Walking());
	a->setPrevious(new Hammering());
	delete this;
}

void Hammering::shovelling(PlayerFSM * a)
{
	std::cout << "Hammering -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	a->setPrevious(new Hammering());
	delete this;
}
