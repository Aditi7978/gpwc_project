#include "Bat.h"
#include "Ball.h"
#include<SFML/Graphics.hpp>
#include<sstream>
using namespace sf;
int main(){
    //create video mode object
    VideoMode vm(1366,768);

    //create window
    RenderWindow window(vm, "Pong!!",Style::Fullscreen);

    //create bat
    Bat bat(1366/2.0,768-20);

    //create ball
    Ball ball(1366/2,0);

    //create hud(heads up display)

    Text hud;
    Font font;
    font.loadFromFile("/home/student/Desktop/gpwc_2241004021/Project2/fonts/KOMIKAP_.ttf");
    hud.setFont(font);
    hud.setFillColor(Color::White);
    hud.setCharacterSize(75);
    hud.setString("Score:0 Lives:3");
    hud.setPosition(20,20);

    //initialize score and time
    int score=0;
    int lives=3;

    //manage time
    Clock clock;

    //main loop
    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event))
        {
			if(event.type==Event::Closed)
            {
                window.close();
            }

		}
        
        //handle quiting game
        if(Keyboard::isKeyPressed(Keyboard::Escape))
        {
            window.close();
        }
        //handle the right cursor
        if(Keyboard::isKeyPressed(Keyboard::Right))
        {
            if(bat.get_Position().left+bat.get_Position().width>1366)
            {
                bat.stopRight();
            }
            else 
            {
                bat.moveRight();
            }
        }
        else
        {   //user not pressed right key hence stopped
            bat.stopRight();
        }
        if(Keyboard::isKeyPressed(Keyboard::Left))
        {
            if(bat.get_Position().left<0)
            {
                bat.stopLeft();
            }
            else 
            {
                bat.moveLeft();
            }
        }
        else
        {   //user not pressed left key hence stopped
            bat.stopLeft();
        }
        //update time
        Time dt=clock.restart();

        //update bat
        bat.update(dt);

        //update ball
        ball.update(dt);

        //update score
        std::stringstream ss;
        ss<<"Score:"<<score<<" Lives:"<<lives;
        hud.setString(ss.str());

        //ball hitting the bottom
        if(ball.getPosition().top>window.getSize().y)
        {
            //reverse the ball direction
            ball.reboundBottom();

            //lives reduce
            lives--;
            if(lives<1){
                //reset score
                score=0;
                //reset lives
                lives=3;
            }
        }

        //ball hitting the top
        if(ball.getPosition().top<0)
        {
            //add score
            score++;
            ball.reboundBatOrTop();
        }
        //ball hitting the side
        if(ball.getPosition().left<0 || (ball.getPosition().left+10) >window.getSize().x)
        {
            ball.reboundSides();
        }
        //ball hits the bat
        if(ball.getPosition().intersects(bat.get_Position()))
        {
            score++;
            ball.reboundBatOrTop();
        }

        //display
        window.clear();
        window.draw(hud);
        window.draw(bat.get_Shape());
        window.draw(ball.getShape());
        window.display();
    }
    return 0;
}