#include "Resources.h"

int main() {
	try {
		if ((ROW % 2 == 1) && (COL % 2 == 1)) {
			throw "ROW and COL must be even numbers";
		} else if (ROW != COL) {
			throw "Board must be nxn, not mxn";
		} else {
			Board gameBoard;

			gameBoard.printBoard();
		}
	} catch (string m) {
		cout << "ERROR: " << m;
		return -1;
	} catch (...) {
		cout << "Unknown error has occurred\n";
		return 1;
	}

	return 0;
}