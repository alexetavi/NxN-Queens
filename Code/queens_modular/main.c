/**
* @file main.c
* @brief this function is the one that gives the size 
*of the chess board and the queen() function is called
*
* @author Alexe Octavian
*
* @date 6/5/2018
*/



#include <stdio.h>
#include <stdlib.h>
#include "functions.h"



int main()
{
 int n;
 printf(" - N Queens Problem Using Backtracking -");
 printf("\n\nEnter number of Queens:");
 scanf("%d",&n);
 queen(1,n);
 printf("\n");
 system("pause");
 return 0;
}
