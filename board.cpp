// Board.cpp
#include <iostream>
#include "board.h"

Board::Board() {
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            board[i][j] = '-';  // Initialize board with placeholder characters
        }
    }
}

void Board::Place_x(int row, int col) {
     if(board[row][col] == 'O'){
       std::cout<< "O is already placed here pick somewhere else";
       std::cin >> row >> col;
       Place_x(row,col);

    }
    else{
        board[row][col] = 'X';
    }
    
}

void Board::Place_o(int row, int col) {
    if(board[row][col] == 'X'){
       std::cout<< "X is already placed here pick somewhere else";
       std::cin >> row>>col;
       Place_o(row,col);
    }
    else{
        board[row][col] = 'O';
    }
    
}

void Board::GameLogic(bool& play){
    for(int i = 0; i < 3;i++){
        if (board[i][0] == 'x' && board[i][1] == 'x' && board[i][2] == 'x'){
            std::cout<<"Player 1 has won.";
            play = false;
            return;
        }
        else if(board[i][0] == 'y' && board[i][1] == 'y' && board[i][2] == 'y'){
            std::cout<< "Plyer 2 has won. ";
            play = false;
            return;
        }
    }
    
}

void Board::show() {
    for (int i = 0; i < 3; i++) {  // Corrected loop bounds
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << ' ';  // Print space for better readability
        }
        std::cout << std::endl;
    }
}
