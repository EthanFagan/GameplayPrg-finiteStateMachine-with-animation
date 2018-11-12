#include "Walking.h"
#include "Jumping.h"
#include "Idle.h"
#include "Hammering.h"
#include "Swordsmanship.h"
#include "Climbing.h"
#include "Shovelling.h"

void Walking::handleInput()
{
}

void Walking::update()
{
}

void Walking::idle(PlayerFSM * a)
{
	std::cout << "Walking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	a->setPrevious(new Walking());
	delete this;
}

void Walking::jumping(PlayerFSM * a)
{
	std::cout << "Walking -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Walking());
	delete this;
}

void Walking::climbing(PlayerFSM * a)
{
	std::cout << "Walking -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Walking());
	delete this;
}

void Walking::swordsmanship(PlayerFSM * a)
{
	std::cout << "Walking -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	a->setPrevious(new Walking());
	delete this;
}

void Walking::shovelling(PlayerFSM * a)
{
	std::cout << "Walking -> shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	a->setPrevious(new Walking());
	delete this;
}

void Walking::hammering(PlayerFSM * a)
{
	std::cout << "Walking -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	a->setPrevious(new Walking());
	delete this;
}
