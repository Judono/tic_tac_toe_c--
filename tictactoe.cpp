#include <iostream>
#include <vector>

class TicTacToe {
private:
    std::vector<std::vector<char > > board;
    int player;

public:
    TicTacToe() : board(3, std::vector<char>(3, ' ')), player(1) {}

    void drawBoard() {
        std::cout << "  1 2 3\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << i+1 << " ";
            for (int j = 0; j < 3; ++j) {
                std::cout << board[i][j] << (j < 2 ? "|" : "");
            }
            std::cout << "\n";
            if (i < 2) {
                std::cout << "  -+-+-\n";
            }
        }
    }

    bool makeMove() {
        int x, y;
        std::cout << "Player " << player << ", enter your move (row and column): ";
        std::cin >> x >> y;
        x--; y--; // Convert to 0-based index

        if (board[x][y] != ' ') {
            std::cout << "Invalid move, try again.\n";
            return true;
        }

        board[x][y] = player == 1 ? 'X' : 'O';

        // Check for a win
        for (int i = 0; i < 3; ++i) {
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
                return false;
            }
            if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
                return false;
            }
        }
        if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ') {
            return false;
        }
        if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[0][2] != ' ') {
            return false;
        }

        player = 3 - player; // Switch player
        return true;
    }

    void playGame() {
        bool playing = true;
        while (playing) {
            drawBoard();
            playing = makeMove();
        }
        std::cout << "Player " << player << " wins!\n";
    }
};

int main() {
    TicTacToe game;
    game.playGame();
    return 0;
}
