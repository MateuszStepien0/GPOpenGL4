#ifndef GAME_H
#define GAME_H

#include <Debug.h>

#include <iostream>
#include <GL/glew.h>
#include <GL/wglew.h>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <fstream>
#include "InitialMyMatrix3.h"
#include "MyVector3.h"

using namespace std;
using namespace sf;


class Game
{
public:
	Game();
	~Game();
	void run();
private:
	Window window;
	bool isRunning = false;
	void initialize();
	void update();
	void render();
	void unload();
	void setupPoints();
	Clock clock;
	Time elapsed;

	float rotationAngle{ 1.0f };
	MyVector3 m_displacmentVector{ 0,0,0 };
	float m_rotationAngleX{ 1.0f };			//angle we rotate the cube on the X axis.
	float m_rotationAngleY{ 1.0f };			//angle we rotate the cube on the Y axis.
	float m_rotationAngleZ{ 1.0f };			//angle we rotate the cube on the Z axis.

	float m_scale{ 1.0f };
	ifstream shadersFile;
	ifstream shadersFile2;
};

#endif