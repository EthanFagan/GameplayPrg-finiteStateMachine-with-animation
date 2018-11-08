#ifndef SWORDSMANSHIP_H
#define SWORDSMANSHIP_H

#include"State.h"

class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void handleInput();
	void update();
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
};

#endif // !SWORDSMANSHIP

