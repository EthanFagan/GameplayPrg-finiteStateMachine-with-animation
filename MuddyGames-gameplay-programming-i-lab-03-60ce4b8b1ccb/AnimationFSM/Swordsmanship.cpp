#include "Swordsmanship.h"
#include "Jumping.h"

void Swordsmanship::handleInput()
{
}

void Swordsmanship::update()
{
}

void Swordsmanship::idle(PlayerFSM * a)
{
}

void Swordsmanship::jumping(PlayerFSM * a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
