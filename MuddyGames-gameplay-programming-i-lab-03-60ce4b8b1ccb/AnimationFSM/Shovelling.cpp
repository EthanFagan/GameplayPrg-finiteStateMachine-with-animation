#include "Shovelling.h"
#include "Jumping.h"
#include "Idle.h"
#include "Climbing.h"
#include "Walking.h"
#include "Swordsmanship.h"
#include "Hammering.h"

void Shovelling::handleInput()
{
}

void Shovelling::update()
{
}

void Shovelling::idle(PlayerFSM * a)
{
	std::cout << "Shovelling -> Idle" << std::endl;
	a->setCurrent(new Idle());
	a->setPrevious(new Shovelling());
	delete this;
}

void Shovelling::jumping(PlayerFSM * a)
{
	std::cout << "Shovelling -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Shovelling());
	delete this;
}

void Shovelling::climbing(PlayerFSM * a)
{
	std::cout << "Shovelling -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Shovelling());
	delete this;
}

void Shovelling::swordsmanship(PlayerFSM * a)
{
	std::cout << "Shovelling -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	a->setPrevious(new Shovelling());
	delete this;
}

void Shovelling::walking(PlayerFSM * a)
{
	std::cout << "Shovelling -> Walking" << std::endl;
	a->setCurrent(new Walking());
	a->setPrevious(new Shovelling());
	delete this;
}

void Shovelling::hammering(PlayerFSM * a)
{
	std::cout << "Shovelling -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	a->setPrevious(new Shovelling());
	delete this;
}
