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
	void climbing(PlayerFSM* a);
	void swordsmanship(PlayerFSM* a);
	void shovelling(PlayerFSM* a);
	void hammering(PlayerFSM* a);
};

#endif // !WALKING.H

