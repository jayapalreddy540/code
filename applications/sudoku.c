// solving the sudoku puzzle 
// Given a partially filled 9*9 2d array Grid[9][9] the goal is to assign digits from (1-9) to the empty cells
//so that  every row,coloumn,amd subgrid of size 3*3 contains exactly one instance of the digits from 1-9.

// referene :  https://www.geeksforgeeks.org/sudoku-backtracking-7/


#include<stdio.h>
#include<stdbool.h>
#define UNASSIGNED 0
#define N 9  //grid size
void printGrid(int grid[N][N]);
_Bool solveSudoku(int grid[N][N]);
_Bool findUnassignedLocation(int grid[N][N]);
_Bool isSafe(int grid[N][N],int row,int col,int num);
_Bool findInRow(int grid[N][N],int row,int num);
_Bool findInCol(int grid[N][N],int col,int num);
_Bool findInGrid(int grid[N][N],int boxStartRow,int boxStartCol,int num);

int rowcol[2]={0,0};

int main()
{
 int grid[N][N]={{3,0,6,5,0,8,4,0,0},
 				 {5,2,0,0,0,0,0,0,0},
 				 {0,8,7,0,0,0,0,3,1},
 				 {0,0,3,0,1,0,0,8,0},
 				 {9,0,0,8,6,3,0,0,5},
 				 {0,5,0,0,9,0,6,0,0},
 				 {1,3,0,0,0,0,2,5,0},
 				 {0,0,0,0,0,0,0,7,4},
				 {0,0,5,2,0,6,3,0,0}
			    };
	if(solveSudoku(grid)==true)
	  printGrid(grid);
	else printf("No Solution exists");
 return 0;
}

_Bool solveSudoku(int grid[N][N])
{
	int row,col,num;
	if(!findUnassignedLocation(grid))
	  return true;
	row=rowcol[0];
	col=rowcol[1];
	for(num=1;num<=9;num++)
	{
		if(isSafe(grid,row,col,num))
		{
			grid[row][col]=num;
			if(solveSudoku(grid))
			   return true;
			grid[row][col]=UNASSIGNED;
		}
	}
	return false;
}

_Bool findUnassignedLocation(int grid[N][N])
{
	int row,col;
	for(row=0;row<N;row++)
	  for(col=0;col<N;col++)
	    if(grid[row][col]==UNASSIGNED)
	    {
	    rowcol[0]=row;
	    rowcol[1]=col;
	      return true;
	    }
	return false;
}

_Bool isSafe(int grid[N][N],int row,int col,int num)
{
	return !findInRow(grid,row,num)&&!findInCol(grid,col,num)&&!findInGrid(grid,row-row%3,col-col%3,num);
}

_Bool findInRow(int grid[N][N],int row,int num)
{
	int col;
	for(col=0;col<N;col++)
	  if(grid[row][col]==num)
	    return true;
	return false;
}

_Bool findInCol(int grid[N][N],int col,int num)
{
	int row;
	for(row=0;row<N;row++)
	  if(grid[row][col]==num)
	    return true;
	return false;
}

_Bool findInGrid(int grid[N][N],int boxStartRow,int boxStartCol,int num)
{
	int row,col;
	for(row=0;row<3;row++)
	 for(col=0;col<3;col++)
	  if(grid[row+boxStartRow][col+boxStartCol]==num)
	    return true;
	return false;
}

void printGrid(int grid[N][N])
{
	int row,col;
	for(row=0;row<N;row++)
	{
    	for(col=0;col<N;col++)
			printf("%d ",grid[row][col]);
		printf("\n");
	}
}
