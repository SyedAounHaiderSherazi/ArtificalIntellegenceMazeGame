//#include <iostream>
//#include <string>
//#include <ctime>
//using namespace std;
//
//string mySubstr(const string& str, int start, int length) {
//    string result;
//    for (int i = start; i < start + length && i < str.length(); ++i) {
//        result += str[i];
//    }
//    return result;
//}
//
//int RandomGenerator(int min, int max) {
//    return min + rand() % (max - min + 1);
//}
//
//bool CellValidChecker(int x, int y, int rows, int cols, int** maze, bool** visited) {
//    return x >= 0 && x < rows&& y >= 0 && y < cols&& maze[x][y] == 1 && !visited[x][y];
//}
//
//bool shortestpathfinding(int x, int y, int rows, int cols, int** maze, bool** visited, string& path) {
//    if (x == rows - 1 && y == cols - 1) {
//        return true;
//    }
//
//    visited[x][y] = true;
//
//    if (CellValidChecker(x + 1, y, rows, cols, maze, visited)) {
//        path += "down, ";
//        if (shortestpathfinding(x + 1, y, rows, cols, maze, visited, path)) {
//            return true;
//        }
//        path = mySubstr(path, 0, path.length() - 6);
//    }
//    if (CellValidChecker(x, y + 1, rows, cols, maze, visited)) {
//        path += "right, ";
//        if (shortestpathfinding(x, y + 1, rows, cols, maze, visited, path)) {
//            return true;
//        }
//        path = mySubstr(path, 0, path.length() - 8);
//    }
//
//    visited[x][y] = false;
//    return false;
//}
//
//void printMaze(int** maze, int rows, int cols, int playerX, int playerY) {
//    for (int i = 0; i < rows; ++i) {
//        for (int j = 0; j < cols; ++j) {
//            if (i == playerX && j == playerY) {
//                cout << "X ";
//            }
//            else {
//                cout << maze[i][j] << " ";
//            }
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//    srand(time(0));
//
//    int choice;
//    cout << "Enter 1 to enter values or 2 to generate them randomly: ";
//    cin >> choice;
//
//    int rows, cols;
//    if (choice == 1) {
//        cout << "Enter the number of rows: ";
//        cin >> rows;
//        cout << "Enter the number of columns: ";
//        cin >> cols;
//    }
//    else if (choice == 2) {
//        cout << "Enter the number of rows: ";
//        cin >> rows;
//        cout << "Enter the number of columns: ";
//        cin >> cols;
//    }
//    else {
//        cout << "Invalid choice! Exiting program." << endl;
//        return 1;
//    }
//
//    int** maze = new int* [rows];
//    bool** visited = new bool* [rows];
//    for (int i = 0; i < rows; ++i) {
//        maze[i] = new int[cols];
//        visited[i] = new bool[cols];
//        for (int j = 0; j < cols; ++j) {
//            if (choice == 1) {
//                cout << "Enter value (0 or 1) for cell [" << i << "][" << j << "]: ";
//                cin >> maze[i][j];
//            }
//            else {
//                maze[i][j] = RandomGenerator(0, 1);
//            }
//            visited[i][j] = false;
//        }
//    }
//
//    string shortestPath;
//    if (shortestpathfinding(0, 0, rows, cols, maze, visited, shortestPath)) {
//        cout << "Shortest Path: " << shortestPath << endl;
//    }
//    else {
//        cout << "Sorry no possible ways to move to the bottom right  :(  . Game finished.   :) Better luck next time (:" << endl;
//        return 0;
//    }
//
//    cout << "Generated Maze:" << endl;
//    printMaze(maze, rows, cols, 0, 0);
//
//
//    int playerX = 0, playerY = 0;
//    while (playerX != rows - 1 || playerY != cols - 1) {
//        cout << "Enter your move (up(I), down(K), left(J), right(L)): ";
//        char move;
//        cin >> move;
//        if (move == 'I' || move == 'i' && playerX > 0 && maze[playerX - 1][playerY] == 1) {            //UP
//            --playerX;
//        }
//        else if (move == 'K' || move == 'k' && playerX < rows - 1 && maze[playerX + 1][playerY] == 1) {        //DOWN
//            ++playerX;
//        }
//        else if (move == 'J' || move == 'j' && playerY > 0 && maze[playerX][playerY - 1] == 1) {            //LEFT
//            --playerY;
//        }
//        else if (move == 'L' || move == 'l' && playerY < cols - 1 && maze[playerX][playerY + 1] == 1) {         //RIGHT
//            ++playerY;
//        }
//        else {
//            cout << "Invalid move PLEASE Try again" << endl;
//            continue;
//        }
//        cout << "Current Maze:" << endl;
//        printMaze(maze, rows, cols, playerX, playerY);
//    }
//
//    cout << "Congratulations! You reached end of the maze" << endl;
//
//    for (int i = 0; i < rows; ++i) {
//        delete[] maze[i];
//        delete[] visited[i];
//    }
//    delete[] maze;
//    delete[] visited;
//
//    return 0;
//}
//
//
//
