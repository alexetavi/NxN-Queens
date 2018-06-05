/**
* @file main.c
* @brief is a function to check if the cell (row,column) is under attack by any 
*other queen or not.Just checking if there is any other queen in the row or column. 
*Then we are checking if there is any queen on the diagonal cells of the cell 
*(row,column) or not.

* @author Alexe Octavian
*
* @date 6/5/2018
*/
#include "functions.h"
int board[20],count;
///function for printing the solution
void print(int n)
{
 int i,j;
 printf("\n\nSolution %d:\n\n",count++);

 for( i=1; i<=n; i++ )
  printf("\t%d",i);

 for( i=1; i<=n; i++ )
 {
  printf("\n\n%d",i);
  for( j=1; j<=n; j++) ///for nxn board
  {
   if(board[i] == j)
    printf("\tQ"); ///queen at i,j position
   else
    printf("\t-"); ///empty slot
  }
 }
}