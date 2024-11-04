// Board.h
#ifndef BOARD_H
#define BOARD_H

class Board {
private:
    char board[3][3];

public:
    Board();
    void Place_x(int row, int col);
    void Place_o(int row, int col);
    void GameLogic(bool&);
    void show();
};

#endif // BOARD_H
