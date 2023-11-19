/*
 * Creator: Abdul Rahman Azam
 * Date: 3-Nov-2023
 * Desc: path of a maze
 */

#include <stdio.h>

int create_path(char maze[5][5], int cx, int cy) 
{
    // base case
    if (maze[cx][cy] == 'E') {
    	maze[cx][cy] = '1';
    	return 1;
    }

    maze[cx][cy] = '1'; // mark traversed path

    // right
    if (cy + 1 < 5 && maze[cx][cy+1] != 'W' && maze[cx][cy+1] != '1')
        if (create_path(maze, cx, cy+1)) return 1;

    // down
    if (cx+1 < 5 && maze[cx+1][cy] != 'W' && maze[cx + 1][cy] != '1')
        if (create_path(maze, cx + 1, cy)) return 1;

    // go back
    maze[cx][cy] = 'O';
    return 0;
} // create_path(char[][5], int, int)

void show_path(char maze[5][5]) 
{
	// show points where marked as visited
	for (int i = 0; i < 5; i++) {
	    for (int j = 0; j < 5; j++) {
	        if (maze[i][j] == '1') printf("%d,%d  ", i, j);
	    }
	}
} // show_path(char[][5])

void show_maze(char maze[5][5]) {
    int start[2], end[2];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", maze[i][j]);
			if (maze[i][j] == 'S') start[0] = i, start[1] = j;
			if (maze[i][j] == 'E') end[0] = i, end[1] = j;
		}
		printf("\n");
	}
	printf("start at: %d,%d\nend at: %d,%d\n", start[0], start[1], end[0], end[1]);
} // show_maze(char[][5])

int main()
{
	int cx, cy;
	char maze[5][5] = {
 {'S', 'O', 'O', 'W', 'W'},
 {'O', 'W', 'O', 'O', 'W'},
 {'W', 'W', 'O', 'W', 'O'},
 {'W', 'O', 'O', 'W', 'O'},
 {'W', 'W', 'O', 'E', 'W'} 
};

	// input maze elements
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (maze[i][j] == 'S') {
				cx = i;
				cy = j;
			}
		}
	}

	printf("\n");
	show_maze(maze); // output maze
	printf("\nPath to complete maze:\n");
	create_path(maze, cx, cy);
	show_path(maze); // output path
	
	return 0;
} // end main()
