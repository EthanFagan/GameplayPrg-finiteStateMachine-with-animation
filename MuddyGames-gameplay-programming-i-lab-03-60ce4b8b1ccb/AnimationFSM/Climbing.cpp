#include <Climbing.h>
#include <Jumping.h>
#include <Idle.h>

#include <string>

void Climbing::handleInput()
{
}

void Climbing::update()
{
}

void Climbing::idle(PlayerFSM* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::jumping(PlayerFSM* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}