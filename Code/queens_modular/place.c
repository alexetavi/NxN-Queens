/**
* @file main.c
* @brief this function is used to display problem solutions. 
*Where the queen can be placed the function will put "Q"
* and where it can not be placed will put "-".
*
* @author Alexe Octavian
*
* @date 6/5/2018
*/

#include "functions.h"
int board[20],count;

/*funtion to check conflicts
If no conflict for desired postion returns 1 otherwise returns 0*/
int place(int row,int column)
{
 int i;
 for(i=1;i<=row-1;i++)
 {
  ///checking column and digonal conflicts
  if(board[i] == column)
   return 0;
  else
   if(abs(board[i]-column) == abs(i-row))
    return 0;
 }

 return 1; ///no conflicts
}