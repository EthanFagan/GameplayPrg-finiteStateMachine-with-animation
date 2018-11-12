#include "Swordsmanship.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Shovelling.h"
#include "Idle.h"
#include "Walking.h"
#include "Hammering.h"

void Swordsmanship::handleInput()
{
}

void Swordsmanship::update()
{
}

void Swordsmanship::idle(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	a->setPrevious(new Swordsmanship());
	delete this;
}

void Swordsmanship::jumping(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Swordsmanship());
	delete this;
}

void Swordsmanship::climbing(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Swordsmanship());
	delete this;
}

void Swordsmanship::walking(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Walking" << std::endl;
	a->setCurrent(new Walking());
	a->setPrevious(new Swordsmanship());
	delete this;
}

void Swordsmanship::shovelling(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Shovelling" << std::endl;
	a->setCurrent(new Shovelling());
	a->setPrevious(new Swordsmanship());
	delete this;
}

void Swordsmanship::hammering(PlayerFSM * a)
{
	std::cout << "Swordsmanship -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	a->setPrevious(new Swordsmanship());
	delete this;
}
