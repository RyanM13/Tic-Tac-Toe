// main.cpp
#include <iostream>
#include <string>
#include "board.h"

void Play(Board&,bool&); 
void PlaceX(Board&);
void PlaceY(Board&);

int main() {
    Board board;
    bool play = true;
    while (play == true){
        Play(board, play);

    }
    

    return 0;
}



void Play(Board& board,bool &play){ 
        PlaceX(board);
        board.GameLogic(play);
    if (play != false){
        PlaceY(board);
        board.GameLogic(play);
    }
}

void PlaceX(Board& board){
    int x,y=0;
    std::cout << "Place your x and y cords for the X: ";
    std::cin >> x >> y;

    board.Place_x(x,y);
    board.show();



}


void PlaceY(Board& board){
    int x,y=0;
    std::cout << "Place your x and y cords for the Y: ";
    std:: cin >> x>> y;

    board.Place_y(x,y);
    board.show();


}