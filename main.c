#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check(int counter,int randomNumber){
  if (counter > 0)
  {
    int a;
    if (counter != 7)
    {
     printf("\n\n %d guess is left ",counter); 
    }
    printf("\n\n enter you guess : ");
    /* for check user enter just number */
   int validation = scanf("%d", &a);
   if (validation == 1)
   {
     if (a == randomNumber)
     {
     printf("\n well done you win :) ");
     }else if ( a > randomNumber)
        {
          printf("\n\n No its smaller than your guess ");
          counter = counter - 1;
          check(counter,randomNumber);
        } else if (a < randomNumber)
        {
          printf("\n\n No its bigger than your guess ");
          counter = counter - 1;
          check(counter,randomNumber);
        }
   }else{
       printf("\n\n you enterd wrong input ");
   }
  
  }else{
     printf("\n\n Soory ! game over :(");
  }
  
}
void printHeart(int n){
    printf("number was : %d tanks for playing \n\n\n",n);
    int a, b, size = 8;
    /* for top of heart */
    for (a = size/2; a <= size; a = a+2)
    {
        /* for cpace part1 */
        for (b = 1; b < size-a; b = b+2)       
            printf(" ");
 
        /* for first triangle */
        for (b = 1; b <= a; b++)
            printf("*");
  
        /* for space in the middle of heart */
        for (b = 1; b <= size-a; b++)
            printf(" ");
         
        /* for second triangle */
        for (b = 1; b <= a-1; b++)
             printf("*");
 
        printf("\n");
    }
 
    /* for the main triangle of heart  */
 
    for (a = size; a >= 0; a--)
    {
       
        for (b = a; b < size; b++)
            printf(" ");
 
        for (b = 1; b <= ((a * 2) - 1); b++)
           printf("*");
 
        printf("\n"); 
    }
}

int main()
{
    /* generate random number */
    int randomNumber;
    char userName[10];
    srand(time(NULL));
    /*for  num < 100 */
    randomNumber = rand() % 100;
    printf("\n hi :) plz tell me your name : ");
    scanf("\n\n %s", userName);
    printf("\n dear %s \n\n I generate random number between 0 and 100",userName);
    printf("\n\n you would have to guess the number with just 7 guesses");
    /* start game */
    check(7, randomNumber);
    printf("\n\n");
    printHeart(randomNumber);
    return 0;
}
