#ifndef SHOVELLING_H
#define SHOVELLING_H

#include"State.h"

class Shovelling : public State
{
public:
	Shovelling() {};
	~Shovelling() {};
	void handleInput();
	void update();
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !SHOVELLING.H

