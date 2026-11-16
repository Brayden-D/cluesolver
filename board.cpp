#include "Board.h"
#include <iostream>
#include <items.h>
using namespace std;

Board::Board() {
    setDoors();
}

void Board::setDoors() {
    // TODO
    return;
}

void Board::displayBoard() {
    for (int row = 0; row < 25; row++) {
        for (int col = 0; col < 24; col++) {
            cout << board[row][col] << " ";
        }
        cout << endl;
    }
}

int Board::getTile(int row, int col) {
    return board[row][col];
}

enum TileType {
    ROOM = 0,
    HALLWAY = 1,
    DOOR = 2
};
