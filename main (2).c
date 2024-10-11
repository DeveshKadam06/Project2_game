/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   srand(time(0));
   int player,computer=rand()%3;
   printf("choose 0 for snake, 1 for water and 2 for gun\n");
   scanf("%d", &player);
   printf("comp:%d\n",computer);
   
   if(player==0 && computer==0)
   {
      printf("Its a draw!\n");
   }
   else if (player==0 && computer==1)
   {
      printf("you win!\n");
   }
   else if (player==0 && computer==2)
   {
      printf("you lose!\n");
   }
   else if (player==1 && computer==0)
   {
      printf("you lose!\n");
   }
   else if (player==1 && computer==1)
   {
      printf("Its a draw!\n");
   }
   else if (player==1 && computer==2)
   {
      printf("you win!\n");
   }
   else if (player==2 && computer==0)
   {
      printf("you win!\n");
   }
   else if (player==2 && computer==1)
   {
      printf("you lose!\n");
   }
   else if (player==2 && computer==2)
   {
      printf("Its a draw\n");
   }
   
    return 0;
}
