#include "Walking.h"
#include "Jumping.h"

void Walking::handleInput()
{
}

void Walking::update()
{
}

void Walking::idle(PlayerFSM * a)
{
}

void Walking::jumping(PlayerFSM * a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
