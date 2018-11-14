#include <stdio.h>
#include<stdbool.h>
#include <time.h>
#include <stdlib.h>
#include "sudokusolver.h"

int main () 
{
	srand(time(0));
   int i,j,row,col,num,n,A[9][9]={0};
   n=30;
    while(n)
    {
      row=rand()%10;
	  col=rand()%10;
	  num=rand()%10;
	  //printf("%d %d %d \n",row,col,num);
	  //A[row][col]=num;
      if(!isSafe(A,row,col,num))
        A[row][col]=0;
      else 
	  {
	  	A[row][col]=num;
	  	n--;
	  }
   }
   printf("\n/*****  generated sudoku *****/\n");
    printGrid(A);
	sudoku(A);
	
   return(0);
}


