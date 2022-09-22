#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    int number1, number2, number3;

    printf(" Enter an integer ");
    int ret1 = scanf("%d", &number1);

    if ( ret1 != 1){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf(" Enter an integer ");
    int ret2 = scanf("%d", &number2);

    if( ret2 != 1 ){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf(" Enter an integer ");
    int ret3 = scanf("%d", &number3);

    if( ret3 != 1 ){
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