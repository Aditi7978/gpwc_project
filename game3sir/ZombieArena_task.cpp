#include <SFML/Graphics.hpp>
#include "Player.cpp"

using namespace sf;

int main()
{
	// The game will always be in one of four states

	// Start with the GAME_OVER state

	// Get the screen resolution and create an SFML window

	// Create a an SFML View for the main action

	// Here is our clock for timing everything

	// How long has the PLAYING state been active

	// Where is the mouse in relation to world coordinates

	// Where is the mouse in relation to screen coordinates

	// Create an instance of the Player class

	// The boundaries of the arena

	// The main game loop
	while (window.isOpen())
	{
		/*
		************
		Handle input
		************
		*/

		// Handle events
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::KeyPressed)
			{									
				// Pause a game while playing

				// Restart while paused

				// Start a new game while in GAME_OVER state, change state to level up

				
				//code when in playing state
			}
		}// End event polling


		// Handle the player quitting

		// Handle controls while playing
		if (state == State::PLAYING)
		{
			// Handle the pressing and releasing of the WASD keys

		}// End WASD while playing

		// Handle the levelling up state
		if (state == State::LEVELING_UP)
		{
			// Handle the player levelling up
			
			if (state == State::PLAYING)
			{			
				// Prepare the level
				// We will modify the next two lines later
				arena.width = 500;
				arena.height = 500;
				arena.left = 0;
				arena.top = 0;

				// We will modify this line of code later
				int tileSize = 50;

				// Spawn the player in the middle of the arena
								
				// Reset the clock so there isn't a frame jump
				
			}
		}// End levelling up

		/*
		****************
		UPDATE THE FRAME
		****************
		*/
		if (state == State::PLAYING)
		{
			// Update the delta time
			
			// Update the total game time
			
			// Make a decimal fraction of 1 from the delta time
			
			// Where is the mouse pointer
			
			// Convert mouse position to world coordinates of mainView
			
			// Update the player
			
			// Make a note of the players new position
			
			// Make the view centre around the player				
			
		}// End updating the scene

		/*
		**************
		Draw the scene
		**************
		*/

		if (state == State::PLAYING)
		{
			window.clear();

			// set the mainView to be displayed in the window
			// And draw everything related to it
			
			// Draw the player
			
		}

		if (state == State::LEVELING_UP)
		{
		}

		if (state == State::PAUSED)
		{
		}

		if (state == State::GAME_OVER)
		{
		}

		window.display();

	}// End game loop

	return 0;
}
