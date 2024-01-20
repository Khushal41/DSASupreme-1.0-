#include <iostream>
#include <vector>
using namespace std;
// By referencce
void printSolution(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;
}

bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    // cheak kar na chahate he ki current place [row][col] par QUEEN palce kar sakte ya nahi
    int i = row;
    int j = col;

    // cheak row
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    // cheak upper left digonal
    i = row;
    j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--;
        j--;
    }

    // cheak bottom left digonal
    i = row;
    j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++;
        j--;
    }

    // kahipar queen nahi mili
    // iska matlab he ki position safe he
    // true return kardo
    return true;
}

void solve(vector<vector<char>> &board, int col, int n)
{
    // Base case
    if (col >= n)
    {
        printSolution(board, n);
        return;
    }

    // 1 case solve
    // Queen ko sare row me place karne ka try kar na he
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q';
            // recursive solution lagega
            solve(board, col + 1, n);
            // Backrakng
            board[row][col] = '-';
        }
    }
}

int main()
{
    int n = 8;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    // 0->Empty cell
    // Q->Value place at empty cell
    int col = 0;
    solve(board, col, n);
    return 0;
}