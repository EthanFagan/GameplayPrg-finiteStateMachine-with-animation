#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(PlayerFSM* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Idle());
	delete this;
}
void Idle::climbing(PlayerFSM* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	a->setPrevious(new Idle());
	delete this;
}

void Idle::sworsmanship(PlayerFSM * a)
{
	std::cout << "Idle -> Swordsmanship" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Idle());
	delete this;
}

void Idle::walking(PlayerFSM * a)
{
	std::cout << "Idle -> Walking" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Idle());
	delete this;
}

void Idle::shovelling(PlayerFSM * a)
{
	std::cout << "Idle -> Shovelling" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Idle());
	delete this;
}

void Idle::hammering(PlayerFSM * a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Idle());
	delete this;
}
