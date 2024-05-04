![image](https://github.com/SyedAounHaiderSherazi/ArtificalIntellegenceMazeGame/assets/168753404/2e37d507-73fb-43c6-83e5-c7b7d475a7bd)
![image](https://github.com/SyedAounHaiderSherazi/ArtificalIntellegenceMazeGame/assets/168753404/497649a1-5eeb-4781-8dd2-401e1431c10e)
# ArtificalIntellegenceMazeGame
A MAZE GAME made in C++ which uses AI to print the shortest path for a player.
Write a program in C++ to implement dynamic memory allocation for a 2D maze game. The game should allow a player to move from one cell to another in the maze and reach the end. The player should be able to move in any of the four directions (up, down, left, right) as long as there is no wall in that direction. The maze should be randomly generated at the start of each game, using dynamic memory allocation. The game should keep track of the player's position and the number of moves taken to reach the end of the maze. The game should also check if the player has reached the end of the maze and display a path to the player indicating whether they won or lost the game. You need to start from top left and reach till bottom right. 60
Example:
1 1 0 0 0
0 1 1 1 0
1 1 0 1 0
0 0 1 1 0
0 0 1 1 1
Path 1 => right, down, right, right, down, down, left, down, right, right
Path 2 => right, down, right, right, down, down, down, right
Example:
1 1 0 0 0
0 1 1 1 0
1 1 0 1 0
0 0 1 0 0
0 0 1 1 1
Path => no path exists
Your task is to print shortest path as in first example is path 2.
