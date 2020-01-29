// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Point2D.h"
using namespace std;

const char* const RED = "\x1b[91m";
const char* const BLUE = "\x1b[94m";
const char* const RESET_COLOR = "\x1b[0m";

void drawMap()
{
	// y  x
	Point2D position = { 0, 0 };

	//reset draw colors
	cout << RESET_COLOR;
	for (position.y = 0; position.y < 3; position.y++)
	{
		for (position.x = 0; position.x < 3; position.x++)
		{
			m_map[position.y][position.x].draw();
		}
		cout << endl;
	}
}

int main()
{
	drawMap();

	int input;
	std::cin >> input ;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
