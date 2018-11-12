#ifndef HAMMERING_H
#define HAMMERING_H

#include <State.h>

class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void handleInput();
	void update();
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void climbing(PlayerFSM* a);
	void swordsmanship(PlayerFSM* a);
	void walking(PlayerFSM* a);
	void shovelling(PlayerFSM* a);
};

#endif // !HAMMERING.H

