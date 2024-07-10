// CodSoft Task 3!!
// TIC TAC TOE GAME !!!
#include <iostream>
#include <vector>
#include <limits> // For limits related to numeric values 
using namespace std;
// decelaring the functions 
void printBoard(const vector<char>& board);
int checkWin(const vector<char>& board);
bool isValidMove(const vector<char>& board, int move);
bool playAgain();

int main() {
    // intilializing game variables
    vector<char> board = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    int player = 1; // turn of the player
    bool continueGame = true;

    while (continueGame) {
        // we are reseting the bord for the new game 
        for (int i = 1; i <= 9; ++i) {
            board[i] = '0' + i;
        }

        int input;
        int status = -1; // 1: win , -1:ongoing , 0:draw the match .
        printBoard(board);

        while (status == -1) {
            player = (player % 2 == 0) ? 2 : 1;
            char mark = (player == 1) ? 'X' : 'O';
            cout << "Player " << player << ", Enter a number: ";
            cin >> input;

            if (!isValidMove(board, input)) {
                cout << "Invalid input.PLZ Try again.\n";
                cin.clear(); // Clear error 
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input 
                continue;
            }

            board[input] = mark;
            printBoard(board);

            status = checkWin(board);
            if (status == 1) {
                cout << "Player " << player << "You win the match!\n";
            } else if (status == 0) {
                cout << "Match is draw!\n";
            }

            player++;
        }

        continueGame = playAgain();
    }

    cout << "Thanks for playing the TIC TAC TOE GAME!!!\n";
    return 0;
}

void printBoard(const vector<char>& board) {
    cout << "\n\n";
    cout << "!!!=== TIC TAC TOE ===!!!\n\n";
    cout << "     |     |     \n";
    cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << "  \n";
    cout << "||_\n";
    cout << "     |     |     \n";
    cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << "  \n";
    cout << "||_\n";
    cout << "     |     |     \n";
    cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << "  \n";
    cout << "     |     |     \n";
    cout << "\n\n";
}

int checkWin(const vector<char>& board) {
    // Checking rows
    for (int i = 1; i <= 7; i += 3) {
        if (board[i] == board[i + 1] && board[i + 1] == board[i + 2]) {
            return 1;
        }
    }
    // Checking colums
    for (int i = 1; i <= 3; ++i) {
        if (board[i] == board[i + 3] && board[i + 3] == board[i + 6]) {
            return 1;
        }
    }
    // Check diagonals
    if (board[1] == board[5] && board[5] == board[9]) {
        return 1;
    }
    if (board[3] == board[5] && board[5] == board[7]) {
        return 1;
    }
    // Checking the condition for draw
    int count = 0;
    for (int i = 1; i <= 9; ++i) {
        if (board[i] == 'X' || board[i] == 'O') {
            count++;
        }
    }
    if (count == 9) {
        return 0; // condition of draw
    }
    return -1; // game is working properly
}

bool isValidMove(const vector<char>& board, int move) {
    return (move >= 1 && move <= 9 && (board[move] == '0' + move));
}

bool playAgain() {
    char choice;
    cout << " want to play again? (Y/N): "; // Ask player if he/she is intrested to play game again 
    cin >> choice;
    return (choice == 'Y' || choice == 'y');
}



























































