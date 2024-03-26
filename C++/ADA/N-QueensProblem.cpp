#include <iostream>
#include <vector>

using namespace std;

// Function to print the chessboard
void printBoard(const vector<vector<int>>& board) {
    int N = board.size();
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << (board[i][j] ? "Q" : ".") << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Function to check if it is safe to place a queen at board[row][col]
bool isSafe(const vector<vector<int>>& board, int row, int col) {
    int N = board.size();

    // Check if there is a queen in the same column
    for (int i = 0; i < row; ++i) {
        if (board[i][col]) {
            return false;
        }
    }

    // Check upper left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check upper right diagonal
    for (int i = row, j = col; i >= 0 && j < N; --i, ++j) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

// Function to solve the N-Queens problem using backtracking
void solveNQueens(vector<vector<int>>& board, int row) {
    int N = board.size();

    // Base case: If all queens are placed
    if (row == N) {
        // Print the solution
        printBoard(board);
        return;
    }

    // Try placing the queen in each column of the current row
    for (int col = 0; col < N; ++col) {
        if (isSafe(board, row, col)) {
            // Place the queen
            board[row][col] = 1;

            // Recur to place the rest of the queens
            solveNQueens(board, row + 1);

            // Backtrack: Remove the queen from the current position
            board[row][col] = 0;
        }
    }
}

// Main function to solve the N-Queens problem
void nQueens(int N) {
    // Create an empty chessboard
    vector<vector<int>> board(N, vector<int>(N, 0));

    // Solve the N-Queens problem
    solveNQueens(board, 0);
}

int main() {
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;

    // Solve the N-Queens problem for N queens
    nQueens(N);

    return 0;
}
