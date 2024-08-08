#include<iostream>
using namespace std;

#pragma once

const int ROW = 8;
const int COL = 8;

class GamePiece {
	public:
		void initializePiece() { piece = ' '; }
		void setPiece(char p) { piece = p; }
		char getPiece() { return piece; }
	private:
		char piece;
};

class Board {
	public:
		Board(); //constructor
		void printBoard();
		bool checkValidMove(int xPos, int yPos);
	private:
		GamePiece gameBoard[ROW][COL];
};

/*
class AIOpponent {
	public:
		
	private:
		
};
*/