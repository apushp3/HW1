#include<stdio.h>
#include<stdlib.h>

int main(){

    int number1, number2, number3;

    printf(" Enter an integer ");
    scanf("%d", &number1);

    printf(" Enter an integer ");
    scanf("%d", &number2);

    printf(" Enter an integer ");
    scanf("%d", &number3);

    if(number1 < 0 || number2 < 0 || number3 < 0){
        printf(" INVALID INPUT ");
        return 0;
    }


    if((number1 < number2 && number2 < number3) || (number3 < number2 && number2 < number1)) {
        printf("median: %d",number2);
    }
    else if((number2 < number1 && number1 < number3) || (number3 < number1 && number1 < number2)){
        printf("median: %d",number1);
    }
    else{
        printf("median: %d",number3);
    }
    return 0;
}