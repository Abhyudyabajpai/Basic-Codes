#include <stdio.h>
#include <stdlib.h>


int main() {
    int guessCount =0;
    int guessLimit =3;
    int secret_num = 7;
    int outofguesses =0;
    int guess;
    
    while(guess!=secret_num && outofguesses==0){
        if(guessCount<guessLimit){
            printf("Guess the number: ");
            scanf("%d",&guess);
            guessCount++;
        }
        else outofguesses ==1;
    }
        
        if(outofguesses==1){
        printf("you lost!");
        }
        else{
        printf("you win!");
        }
	return 0;
} 
