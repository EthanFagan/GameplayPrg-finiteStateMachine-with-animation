#ifndef PLAYER_H
#define PLAYER_H

#include <Input.h>
#include <PlayerFSM.h>
#include <AnimatedSprite.h>
#include <Windows.h>

class Player
{
private:
	PlayerFSM m_state;
	AnimatedSprite m_idle_sprite;
	AnimatedSprite m_jump_animation;
	AnimatedSprite m_climb_animation;
	AnimatedSprite m_sword_animation;
	AnimatedSprite m_hammering_animation;
	AnimatedSprite m_shovelling_animation;
	AnimatedSprite m_walking_animation;

	Player();

	bool idling = true;
	bool jumping = false;
	bool climbing = false;
	bool swording = false;
	bool walking = false;
	bool hammering = false;
	bool shovelling = false;

public:
	Player(const AnimatedSprite&, const AnimatedSprite&, const AnimatedSprite&, const AnimatedSprite&, const AnimatedSprite&, const AnimatedSprite&, const AnimatedSprite&);
	~Player();
	AnimatedSprite& getAnimatedSprite();
	void handleInput(Input);
	void update();
};

#endif // !PLAYER_H
