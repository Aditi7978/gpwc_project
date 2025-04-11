#include "Ball.h"
using namespace sf;
//ball class constructor

Ball::Ball(float startX,float startY){
    m_Position.x=startX;
    m_Position.y=startY;
    m_Shape.setRadius(10.0);
    m_Shape.setPosition(m_Position);
}
FloatRect Ball::getPosition()
{
    return m_Shape.getGlobalBounds();
}
CircleShape Ball:: getShape(){
    return m_Shape;
}
float Ball::getXVelocity(){
    return m_DirectionX;
}
void Ball::reboundSides()
{
    m_DirectionX=-m_DirectionX;//goes in opposite direction after collision
}
void Ball::reboundBatOrTop()
{
    m_DirectionY=-m_DirectionY;//goes in opposite direction after collision
}
void Ball::reboundBottom()
{
    m_Position.y=0;
    m_Position.x=500;
    m_DirectionY=-m_DirectionY;
}
void Ball::update(Time dt){
   //update ball position
   m_Position.x += m_DirectionX * m_Speed * dt.asSeconds();
   m_Position.y += m_DirectionY * m_Speed * dt.asSeconds();

   //move the ball and bat
   m_Shape.setPosition(m_Position);
}