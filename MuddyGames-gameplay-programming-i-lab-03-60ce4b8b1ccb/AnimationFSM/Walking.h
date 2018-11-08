#ifndef WALKING_H
#define	WALKING_H

#include"State.h"

class Walking : public State
{
public:
	Walking() {};
	~Walking() {};
	void handleInput();
	void update();
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !WALKING.H

