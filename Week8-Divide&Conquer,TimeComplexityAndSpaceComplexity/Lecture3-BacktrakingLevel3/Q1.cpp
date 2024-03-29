#include <iostream>
#include <vector>
using namespace std;
// By Reference
bool isSafe(int i, int j, int row, int col, int arr[][4], vector<vector<bool>> &visited)
{
    // Element inside array && arr ke andar one palce && vsited false chahiye -> true
    if (((i >= 0 && i < row) && (j >= 0 && j < col)) &&
        (arr[i][j] == 1) &&
        (visited[i][j] == false))
    {
        return true;
    }
    else
    {
        return false;
    }
}
// vector by reference
// (arr i/p,arr size,starting position,visited mark,ans store,ans create)
void solveMaze(int arr[][4], int row, int col, int i, int j,
               vector<vector<bool>> &visited, vector<string> &path, string output)
{

    // Base case
    if (i == row - 1 && j == col - 1)
    {
        // answer found
        // ans store
        path.push_back(output);
        return;
    }

    // 1 case solve
    // Down -> i+1, j
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        solveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');
        // backtrack
        visited[i + 1][j] = false; // to run multiple case
    }

    // Left -> i, j-1
    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        solveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');
        // backtrack
        visited[i][j - 1] = false;
    }

    // Right -> i, j+1
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        solveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');
        // backtrack
        visited[i][j + 1] = false;
    }

    // Up-> i-1, j
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        solveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');
        // backtrack
        visited[i - 1][j] = false;
    }
}

int main()
{
    int maze[4][4] = {{1, 0, 0, 0},
                      {1, 1, 0, 1},
                      {1, 1, 0, 0},
                      {0, 1, 1, 1}};

    // scource is -> 0
    if (maze[0][0] == 0)
    {
        cout << "No Path Exists " << endl;
        return 0;
    }

    int row = 4;
    int col = 4;

    // It create 2d array its dimention is nxm
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // src ki value k true mark kredete h
    visited[0][0] = true;

    // String path store
    vector<string> path;
    string output = "";

    // function call
    solveMaze(maze, row, col, 0, 0, visited, path, output);

    cout << "printing the results " << endl;
    for (auto i : path)
    {
        cout << i << " ";
    }
    cout << endl;

    if (path.size() == 0)
    {
        cout << "No Path Exists " << endl;
    }

    return 0;
}