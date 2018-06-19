// 1. Declare an array that represents the squares of a chessboard; the type of
// the array being an enum that defines the pieces that may possibly occupy the
// squares.
// Are you sure about this?
#include<iostream>
#include<tuple>
using std::cout;
using std::endl;

int main() {
    enum pieces {
        Rook,
        Knight,
        Bishop,
        Queen,
        King,
        Pawn,
        Empty
    };

    pieces board[8][8] = {{Rook, Knight, Bishop, Queen, King, Bishop, Knight, Rook},
                          {Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
                          {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
                          {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
                          {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
                          {Empty, Empty, Empty, Empty, Empty, Empty, Empty, Empty},
                          {Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn, Pawn},
                          {Rook, Knight, Bishop, King, Queen, Bishop, Knight, Rook}};

    for(int rows=0; rows < 8; rows++) {
        for(int cols=0 ; cols < 8; cols++) {
            cout << board[rows][cols] << " ";
        }
        cout << endl;
    }

    // xD wow that's terrible, this is entire program is a HACK

    return 0;
}
