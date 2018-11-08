#ifndef INPUT_H
#define INPUT_H
class Input
{
public:
	Input();
	~Input();

	enum Action
	{
		IDLE,
		UP,
		LEFT,
		RIGHT,
		JUMP,
		SWORD,
		SHOVEL,
		WALK,
		CLIMB,
		HAMMER
	};

	void setCurrent(Action);
	Action getCurrent();

private:
	Action m_current;
};
#endif