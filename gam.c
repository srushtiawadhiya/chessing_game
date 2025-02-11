#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main() {
   int random , guess ; 
   int no_of_guess = 0;
   srand(time(NULL));

    printf("Welcome to the world of Guessing Numbers\n");
    random = rand() * 100 +1;  // Generating Between 0 to 100 

    do {
       
       printf("\nPlease Enter your Guess Between ( 1 to 100)");
       scanf("%d",&guess);
       no_of_guess++;

       if (guess < random ){
        printf("Guess Larger number.\n");
       }else if (guess > random){
          printf("Guess smaller number.\n");
       } else { 
          printf("Congratulations ! you have successfully guessed the Number in %d attempts.\n", no_of_guess);
       }

    } while (guess != random);

     printf("\n Bye Bye Thanks for playing.");
     printf("\n Developed by : Srushti ");
}