#include "Resources.h"

Board::Board() {
	//initialize all pieces as blank
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			gameBoard[i][j].initializePiece();
		}
	}

	//mark middle squares with alternating black/white pattern
	int row_div = (ROW / 2) - 1;
	int col_div = (COL / 2) - 1;
	
	gameBoard[row_div][col_div].setPiece('W');
	gameBoard[row_div][col_div + 1].setPiece('B');
	gameBoard[row_div + 1][col_div].setPiece('B');
	gameBoard[row_div + 1][col_div + 1].setPiece('W');
}

void Board::printBoard() {
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			cout << gameBoard[i][j].getPiece();
		}
		cout << "|\n";
	}
}

//when checking for valid move, you must be able to outflank an opponent
// B W W W B
// becomes
// B B B B B
// whereas
// B W W B W
// is not valid as
// B B B B W
// would not outflank the opponent
bool Board::checkValidMove(int xPos, int yPos) {
	//generate margins
	int i = xPos;
	int j = yPos;
	bool endOfTraverse = false;

	//horizontal left check
	while (!endOfTraverse) {

	}

	//horizontal right check


	//vertical up check


	//vertical down check


	//diagnol up-left check


	//diagnol up-right check


	//diagnol down-left check


	//diagnol down-right check

}