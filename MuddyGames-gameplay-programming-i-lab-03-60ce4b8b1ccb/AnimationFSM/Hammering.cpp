#include "Hammering.h"
#include "Jumping.h"

void Hammering::handleInput()
{
}

void Hammering::update()
{
}

void Hammering::idle(PlayerFSM * a)
{
}

void Hammering::jumping(PlayerFSM * a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
