#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,nguesses=0;
    srand(time(0));
    num = rand()%100 + 1;
do{
    printf("guess the number between 1 to 100\n");
    scanf("%d",&guess);

    if(guess>num){
    printf("Enter lower number\n");
    }

    else if(guess<num){
    printf("Enter higher number\n");
    }

    else{
    printf("YOU GUESSED THE CORRECT NUMBER IN %d ATTEMPTS\n",nguesses);
    }
    nguesses++;

   }while(guess!=num);
   
    return 0;
}