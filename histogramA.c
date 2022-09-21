#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("A: ");
    scanf("%d", &a);

    if( a < 0 ){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf("B: ");
    scanf("%d", &b);

    if( b < 0 ){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf("C: ");
    scanf("%d", &c);

    if( c < 0 ){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf("D: ");
    scanf("%d", &d);

    if( d < 0 ){
        printf(" INVALID INPUT ");
        return 0;
    }


    printf("A: ");
    for(int i=0; i<a; i++){
        printf("X");
    }
    printf("\n");

    printf("B: ");
    for(int i=0;i<b; i++){
        printf("X");
    }
    printf("\n");

    printf("C: ");
    for(int i=0;i<c; i++){
        printf("X");
    }
    printf("\n");

    printf("D: ");
    for(int i=0; i<d; i++){
        printf("X");
    }
    printf("\n");

    return 0;


}