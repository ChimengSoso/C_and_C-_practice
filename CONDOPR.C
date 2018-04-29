/* Conditional Operator - Program to find maximum of 3 numbers using conditional (ternary) operator */


#include  <stdio.h>
#include  <conio.h>

void main()
{
  int  a , b , c , max ;

  clrscr() ;

  printf("Enter 3 integers: ") ;
  scanf("%d %d %d" , &a , &b , &c) ;

  max = a > b ? ( a > c ? a : c ) : ( b > c ? b : c ) ; 

  printf("Maximum is %d" , max ) ;

  getch() ;
}


/*
Output1:

Enter 3 integers: 3 1 2
Maximum is 3

Output2:

Enter 3 integers: 2 3 1
Maximum is 3

Output3:

Enter 3 integers: 1 2 3
Maximum is 3

*/


