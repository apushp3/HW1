#include<stdio.h>

int main(){

    int number, number2;

    printf(" Enter a number of stairs: ");
    scanf("%d", &number);

    if(number<0){
        printf(" INVALID INPUT ");
        return 0;
    }

    number2 = number;

    printf(" up: ");
    printf("\n");
    printf("\n");
    for(int i = 0; i<number; i++){
        for(int j = i; j<number - 1; j++){
            printf(" ");
        }
        for(int k = 0; k<i+1; k++){
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    printf(" down: ");
    printf("\n");
    printf("\n");
    for(int i = 1; i<=number; i++){
        for(int j = 0; j<i; j++){
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    printf(" up-down: ");
    printf("\n");
    printf("\n");
    for(int i = 1; i<=number; i++){
        for(int j = 0; j<number2-1; j++){
            printf(" ");
        }
        for(int k = 1; k<=(2*i)-1; k++){
            printf("X");
        }
        number2--;
        printf("\n");
    }

    return 0;

}