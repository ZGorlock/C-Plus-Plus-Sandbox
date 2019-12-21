#include <stdlib.h>
#include <stdio.h>

#include "SFML-2.2\include\SFML\Window.hpp"
#include "SFML-2.2\include\SFML\OpenGL.hpp"

using namespace std;

int main()
{
  sf::Window window(sf::VideoMode(800, 600), "OpenGL");

  // it works out of the box
  glEnable(GL_TEXTURE_2D);

  return 0;
}