#include "Shovelling.h"
#include "Jumping.h"

void Shovelling::handleInput()
{
}

void Shovelling::update()
{
}

void Shovelling::idle(PlayerFSM * a)
{
}

void Shovelling::jumping(PlayerFSM * a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
