#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void handleInput();
	void update();
	void idle(PlayerFSM* a);
	void jumping(PlayerFSM* a);
	void swordsmanship(PlayerFSM* a);
	void walking(PlayerFSM* a);
	void shovelling(PlayerFSM* a);
	void hammering(PlayerFSM* a);
};

#endif // !IDLE_H