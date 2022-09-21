
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(int argc, char *argv[]) {
  int target;


  if(argc == 2) {
    if(sscanf(argv[1], "%d", &target) == 1 &&
        target >= 0 && target <= 99){ 
      printf("USING COMMAND-LINE SPECIFIED TARGET %d\n\n", target);
    }
    else {
      printf("BAD COMMAND-LINE VALUE. GOODBYE\n");
      return 0;
    }
  }
  else {
    target = rand() % 99;
    // your code here to set the target to a random value in 0..99
    //
  }

  int guess;
  int count = 0;
  printf(" I am thinking of a random number between 0 and 99 ");
  printf(" \n\n ");

  while(1){
    
    printf(" your guess ");
    scanf("%d", &guess);

    
    if(guess < target/4){
      printf(" COME ON, THAT'S IMPOSSIBLE ");
      count = count + 1;
    }
    else if(guess < target){
      printf(" TOO SMALL ");
      count = count + 1;
    }
    else if(guess > target){
      printf(" TOO BIG ");
      count = count + 1;
    }
    else if( guess < 0 || guess > 99 ){
      printf(" OOPS - NOT IN RANGE 0..99.  NO GUESS CHARGED ");
    }
    else if( guess == target ){
      printf(" YOU GOT IT! ");
      count = count + 1;
      printf(" NUMBER OF GUESS %d", count);
      return 0;
    }
    printf("\n");
  }


  // when we arrive here, target has been set either via the command
  //   line or via your randomization code and we are ready to go.


  return 0;
}
