#include <iostream>
#include <SFML/Graphics.hpp>
#include <AnimatedSprite.h>
#include <Player.h>
#include <Input.h>
#include <Debug.h>


using namespace std;

int main()
{
	// Create the main window
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");

	// Load a sprite to display
	sf::Texture texture;
	if (!texture.loadFromFile("assets\\grid.png")) {
		DEBUG_MSG("Failed to load file");
		return EXIT_FAILURE;
	}

	// Setup Players Default Animated Sprite
	AnimatedSprite animated_sprite(texture);
	animated_sprite.addFrame(sf::IntRect(3, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(88, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(173, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(258, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(343, 3, 84, 84));
	animated_sprite.addFrame(sf::IntRect(428, 3, 84, 84));

	//Setup for jump frames
	AnimatedSprite jump_Animation(texture);
	jump_Animation.addFrame(sf::IntRect(3,88, 84, 84));
	jump_Animation.addFrame(sf::IntRect(3, 173, 84, 84));
	jump_Animation.addFrame(sf::IntRect(3, 258, 84, 84));
	jump_Animation.addFrame(sf::IntRect(3, 343, 84, 84));
	jump_Animation.addFrame(sf::IntRect(3, 428, 84, 84));
	jump_Animation.addFrame(sf::IntRect(3, 88, 84, 84));

	//setup for climb frames
	AnimatedSprite climb_Animation(texture);
	climb_Animation.addFrame(sf::IntRect(88, 88, 84, 84));
	climb_Animation.addFrame(sf::IntRect(88, 173, 84, 84));
	climb_Animation.addFrame(sf::IntRect(88, 258, 84, 84));
	climb_Animation.addFrame(sf::IntRect(88, 343, 84, 84));
	climb_Animation.addFrame(sf::IntRect(88, 428, 84, 84));
	climb_Animation.addFrame(sf::IntRect(88, 88, 84, 84));

	//setup for sword frames
	AnimatedSprite sword_Animation(texture);
	sword_Animation.addFrame(sf::IntRect(173, 88, 84, 84));
	sword_Animation.addFrame(sf::IntRect(173, 173, 84, 84));
	sword_Animation.addFrame(sf::IntRect(173, 258, 84, 84));
	sword_Animation.addFrame(sf::IntRect(173, 343, 84, 84));
	sword_Animation.addFrame(sf::IntRect(173, 428, 84, 84));
	sword_Animation.addFrame(sf::IntRect(173, 88, 84, 84));

	//setup for hammer frames
	AnimatedSprite hammering_Animation(texture);
	hammering_Animation.addFrame(sf::IntRect(258, 88, 84, 84));
	hammering_Animation.addFrame(sf::IntRect(258, 173, 84, 84));
	hammering_Animation.addFrame(sf::IntRect(258, 258, 84, 84));
	hammering_Animation.addFrame(sf::IntRect(258, 343, 84, 84));
	hammering_Animation.addFrame(sf::IntRect(258, 428, 84, 84));
	hammering_Animation.addFrame(sf::IntRect(258, 88, 84, 84));

	//setup for shovelframes
	AnimatedSprite shovel_Animation(texture);
	shovel_Animation.addFrame(sf::IntRect(343, 88, 84, 84));
	shovel_Animation.addFrame(sf::IntRect(343, 173, 84, 84));
	shovel_Animation.addFrame(sf::IntRect(343, 258, 84, 84));
	shovel_Animation.addFrame(sf::IntRect(343, 343, 84, 84));
	shovel_Animation.addFrame(sf::IntRect(343, 428, 84, 84));
	shovel_Animation.addFrame(sf::IntRect(343, 88, 84, 84));

	//setup for walking frames
	AnimatedSprite walking_Animation(texture);
	walking_Animation.addFrame(sf::IntRect(428, 88, 84, 84));
	walking_Animation.addFrame(sf::IntRect(428, 173, 84, 84));
	walking_Animation.addFrame(sf::IntRect(428, 258, 84, 84));
	walking_Animation.addFrame(sf::IntRect(428, 343, 84, 84));
	walking_Animation.addFrame(sf::IntRect(428, 428, 84, 84));
	walking_Animation.addFrame(sf::IntRect(428, 88, 84, 84));

	// Setup the Player
	Player player(animated_sprite,jump_Animation, climb_Animation, sword_Animation, hammering_Animation, shovel_Animation, walking_Animation);
	Input input;

	// Start the game loop
	while (window.isOpen())
	{
		// Process events
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				// Close window : exit
				window.close();
				break;
			case sf::Event::KeyPressed:
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
				{
					input.setCurrent(Input::Action::LEFT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
				{
					input.setCurrent(Input::Action::RIGHT);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
				{
					input.setCurrent(Input::Action::UP);
				}	
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
				{
					input.setCurrent(Input::Action::SWORD);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::H))
				{
					input.setCurrent(Input::Action::HAMMER);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					input.setCurrent(Input::Action::SHOVEL);
				}
				else if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
				{
					input.setCurrent(Input::Action::CLIMB);
				}
				break;
			/*default:

					input.setCurrent(Input::Action::IDLE);
				break;*/
			}
		}

		// Handle input to Player
		player.handleInput(input);

		// Update the Player
		player.update();

		// Clear screen
		window.clear();

		// Draw the Players Current Animated Sprite
		window.draw(player.getAnimatedSprite());

		// Update the window
		window.display();
	}

	return EXIT_SUCCESS;
};