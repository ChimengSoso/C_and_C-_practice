/* Pascal Triangle - Program to print Pascal's triangle for n rows 
    Dec 2013 */

#include  <stdio.h>
#include  <conio.h>

long  fact(int  n) ;

void main()
{
  int  n , r , c , j ;
  
  clrscr() ;

  printf("Enter the number of rows: ") ;
  scanf("%d" , &n) ;

  for(r=0 ; r<n ; r++)
  {
	for(j=1 ; j<=n-r-1 ; j++)
	      printf(" ") ;

    for(c=0 ; c<=r ; c++) 
      printf("%ld " , fact(r) / ( fact(c) * fact(r-c) ) ) ; 
        
    printf("\n") ;
  } 

  getch() ;
}

long  fact(int  n)
{
  int  i;
  long  f=1 ;

  for(i=1 ; i<=n ; i++)
	f=f*i ;

  return  f ;
}


/*
Output:

Enter the number of rows: 4
   1 
  1 1 
 1 2 1 
1 3 3 1 

*/
