// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

const char* const RED = "\x1b[91m";
const char* const BLUE = "\x1b[94m";
const char* const YELLOW = "\x1b[93m";
const char* const RESET_COLOR = "\x1b[0m";
const char* const INDENT = "\t";

int main()
{
	bool gameOver = false;

	int boardWidth = 3;
	int boardHeight = 3;
	// y  x	
	char board[3][3] = { {'1','2','3',},{'4','5','6'},{'7','8','9'} };	

	//variable used to switch between playerX and playerO
	bool player = true;

	//variable used to take in the players' choice of position
	int input;

	//Welcome message
	cout << "Welcome to Shmlutick Shmlutack Shmlutoe!" << endl;
	cout << "Press 'Enter' to continue.";
	cin.clear();
	cin.ignore(cin.rdbuf()->in_avail());
	cin.get();

	while (!gameOver)
	{
		system("cls");

		//draw board
		for (int y = 0; y < boardHeight; y++)
		{
			cout << endl;
			for (int x = 0; x < boardWidth; x++)
			{
				//displays the new character as a red x, blue o or default white number
				if (board[y][x] == 'X')
				{
					cout << YELLOW << "[ " << RED << board[y][x] << YELLOW << " ]";
				}
				else if (board[y][x] == 'O')
				{
					cout << YELLOW << "[ " << BLUE << board[y][x] << YELLOW << " ]";
				}
				else
				{
					cout << YELLOW << "[ " << RESET_COLOR << board[y][x] << YELLOW << " ]";
				}
			}
		}		

		//conditions to switch player turns
		if (player)
		{

			cout << "Player 'X', select a point in the grid: ";

			//clears input from previous input
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());

			cin >> input;

			//reassignes the value of the selected grid for player X
			switch (input)
			{
			case 1:
				if (board[0][0] == '1')
				{
					board[0][0] = 'X';

					//changes player to playerO
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				
				break;
			case 2:
				if (board[0][1] == '2')
				{
					board[0][1] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 3:
				if (board[0][2] == '3')
				{
					board[0][2] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 4:
				if (board[1][0] == '4')
				{
					board[1][0] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 5:
				if (board[1][1] == '5')
				{
					board[1][1] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 6:
				if (board[1][2] == '6')
				{
					board[1][2] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 7:
				if (board[2][0] == '7')
				{
					board[2][0] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 8:
				if (board[2][1] == '8')
				{
					board[2][1] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			case 9:
				if (board[2][2] == '9')
				{
					board[2][2] = 'X';
					player = false;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}				
				break;
			}
				
		}
		else
		{
			cout << "Player 'O', select a point in the grid: ";

			//clears input from previous input
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());

			cin >> input;

			//reassignes the value of the selected grid for player X
			switch (input)
			{
			case 1:
				if (board[0][0] == '1')
				{
					board[0][0] = 'O';
					//changes player to playerX
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}

				break;
			case 2:
				if (board[0][1] == '2')
				{
					board[0][1] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 3:
				if (board[0][2] == '3')
				{
					board[0][2] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 4:
				if (board[1][0] == '4')
				{
					board[1][0] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 5:
				if (board[1][1] == '5')
				{
					board[1][1] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 6:
				if (board[1][2] == '6')
				{
					board[1][2] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 7:
				if (board[2][0] == '7')
				{
					board[2][0] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 8:
				if (board[2][1] == '8')
				{
					board[2][1] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;
			case 9:
				if (board[2][2] == '9')
				{
					board[2][2] = 'O';
					player = true;
				}
				else
				{
					cout << "That space is not available. Please try again.";
					cin.get();
				}
				break;					
			}
		}
	}

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
