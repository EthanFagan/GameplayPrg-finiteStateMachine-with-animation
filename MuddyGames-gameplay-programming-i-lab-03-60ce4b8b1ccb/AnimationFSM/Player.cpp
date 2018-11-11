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

Player::Player(const AnimatedSprite& s, const AnimatedSprite& s1, const AnimatedSprite& s2, const AnimatedSprite& s3, const AnimatedSprite& s4, const AnimatedSprite& s5, const AnimatedSprite& s6) : m_idle_sprite(s),
m_jump_animation(s1),
m_climb_animation(s2),
m_sword_animation(s3),
m_hammering_animation(s4),
m_shovelling_animation(s5),
m_walking_animation(s6)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	if (idling)
	{
		int frame = m_idle_sprite.getCurrentFrame();
		m_idle_sprite.setTextureRect(m_idle_sprite.getFrame(frame));
		return m_idle_sprite;
	}
	
	else if (jumping)
	{
		int frame = m_jump_animation.getCurrentFrame();
		m_jump_animation.setTextureRect(m_jump_animation.getFrame(frame));
		return m_jump_animation;
	}
	
	else if (walking)
	{
		int frame = m_walking_animation.getCurrentFrame();
		m_walking_animation.setTextureRect(m_walking_animation.getFrame(frame));
		return m_walking_animation;
	}

	else if (climbing)
	{
		int frame = m_climb_animation.getCurrentFrame();
		m_climb_animation.setTextureRect(m_climb_animation.getFrame(frame));
		return m_climb_animation;
	}

	else if (swording)
	{
		int frame = m_sword_animation.getCurrentFrame();
		m_sword_animation.setTextureRect(m_sword_animation.getFrame(frame));
		return m_sword_animation;
	}

	else if (hammering)
	{
		int frame = m_hammering_animation.getCurrentFrame();
		m_hammering_animation.setTextureRect(m_hammering_animation.getFrame(frame));
		return m_hammering_animation;
	}

	else if (shovelling)
	{
		int frame = m_shovelling_animation.getCurrentFrame();
		m_shovelling_animation.setTextureRect(m_shovelling_animation.getFrame(frame));
		return m_shovelling_animation;
	}
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		jumping = false;
		swording = false;
		shovelling = false;
		walking = false;
		climbing = false;
		hammering = false;
		idling = true;
		m_state.idle();
		break;
	case Input::Action::UP:
		//std::cout << "Player Up" << std::endl;
		swording = false;
		shovelling = false;
		walking = false;
		climbing = false;
		idling = false;
		hammering = false;
		jumping = true;
		m_state.jumping();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		swording = false;
		shovelling = false;
		climbing = false;
		idling = false;
		jumping = false;
		hammering = false;
		walking = true;
		m_state.walking();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Right" << std::endl;
		swording = false;
		shovelling = false;
		climbing = false;
		idling = false;
		jumping = false;
		hammering = false;
		walking = true;
		m_state.walking();
		break;
	case Input::Action::CLIMB:
		//std::cout << "Player Climbing" << std::endl;
		swording = false;
		shovelling = false;
		idling = false;
		jumping = false;
		hammering = false;
		walking = false;
		climbing = true;
		m_state.climbing();
		break;
	case Input::Action::SHOVEL:
		//std::cout << "Player Shovelling" << std::endl;
		swording = false;
		idling = false;
		jumping = false;
		hammering = false;
		walking = false;
		climbing = false;
		shovelling = true;
		m_state.shovelling();
		break;
	case Input::Action::JUMP:
		//std::cout << "Player Jumping" << std::endl;
		swording = false;
		idling = false;
		hammering = false;
		walking = false;
		climbing = false;
		shovelling = false;
		jumping = true;
		m_state.jumping();
		break;
	case Input::Action::SWORD:
		idling = false;
		hammering = false;
		walking = false;
		climbing = false;
		shovelling = false;
		jumping = false;
		swording = true;
		m_state.swordsmanship();
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_idle_sprite.update();
	m_jump_animation.update();
	m_climb_animation.update();
	m_sword_animation.update();
	m_hammering_animation.update();
	m_shovelling_animation.update();
	m_walking_animation.update();

}