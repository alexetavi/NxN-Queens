/**
* @file main.c
* @brief Function queen(int row, int n) is checking for proper positioning of queen.
 We are re looking for a position for our queen on the row "row". If there is a valid
* position,the queen it is placed, then call the function recursively: "queen(row+1,n)".
If a position isn’t found in this call the program will abandon that solution, and go 
*back to where it was before. There, it will check again for the next value of column,
* and if the position is valid, it is then going to try again for row + 1, until there 
*is a valid solution there. When it finds one, it is going to call queen() again, 
*with row + 1.
*
* @author Alexe Octavian
*
* @date 6/5/2018
*/

#include "functions.h"
int board[20],count;
///function to check for proper positioning of queen
void queen(int row,int n)
{
 int column;
 for( column=1; column<=n; column++ )
 {
  if(place(row, column))
  {
   board[row] = column; ///no conflicts so place queen
   if(row==n) ///dead end
    print(n); ///printing the board configuration
   else ///try queen with next position
    queen(row+1,n);
  }
 }
}