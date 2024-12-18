/* Dice.c */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int random_number(int max){
   int num;
   num = rand() % max + 1;

   return num;
}

int main() {
   int balance = 1000, bet, guess, dice;
   srand(getpid());

   while(balance>0){
      printf("Available Balance : %d \nMake your bet \n     or \nEnter 0 to quit the game. \n ",balance);
      fflush(stdout);
      scanf("%d", &bet);
      
      if (bet == 0) return 0;

      if(bet>balance){
         printf("Enter a valid amount. Insufficient Balance\n...........\n");
         continue;
      }

      printf("Guess a number(1-6): ");
      fflush(stdout);
      scanf("%d", &guess);
     
      printf("Throwing the dice\n........\n");
      fflush(stdout);
      sleep(3);
      dice = random_number(6);
      printf("Dice : %d\n", dice);

      if(guess == dice){
         bet *= 3;
         balance += bet;
         printf("Congratulations! You won.\n");
      } else {
         balance -= bet;
         printf("Sorry. You lost.\n");
      }
      
   }
   return 0;
}

