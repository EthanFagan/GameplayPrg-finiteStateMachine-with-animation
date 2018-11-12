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
	a->setPrevious(new Climbing());
	delete this;
}
void Climbing::jumping(PlayerFSM* a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	a->setPrevious(new Climbing());
	delete this;
}

void Climbing::swordsmanship(PlayerFSM * a)
{
	std::cout << "Cannot sword while climbing" << std::endl;
	
}

void Climbing::walking(PlayerFSM * a)
{
	std::cout << "Cannot walk while climbing" << std::endl;
	
}

void Climbing::shovelling(PlayerFSM * a)
{
	std::cout << "Cannot shovel while climbing" << std::endl;
	
}

void Climbing::hammering(PlayerFSM * a)
{
	std::cout << "Cannot hammer while climbing" << std::endl;
	
}
