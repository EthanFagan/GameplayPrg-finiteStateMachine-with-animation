#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>
#include <State.h>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s, const AnimatedSprite& s1, const AnimatedSprite& s2, const AnimatedSprite& s3) : m_idle_sprite(s),
m_jump_animation(s1),
m_climb_animation(s2),
m_sword_animation(s3)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_idle_sprite.getCurrentFrame();
	m_idle_sprite.setTextureRect(m_idle_sprite.getFrame(frame));
	return m_idle_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_state.idle();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		m_state.jumping();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_state.walking();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Right" << std::endl;
		m_state.walking();
		break;
	case Input::Action::CLIMB:
		//std::cout << "Player Climbing" << std::endl;
		m_state.climbing();
		break;
	case Input::Action::SHOVEL:
		//std::cout << "Player Shovelling" << std::endl;
		m_state.shovelling();
		break;
	case Input::Action::JUMP:
		//std::cout << "Player Jumping" << std::endl;
		m_state.jumping();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_idle_sprite.update();
	//m_sword_animation.update();
}