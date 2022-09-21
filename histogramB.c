#include<stdio.h>

int maximum(int a, int b){
    if(a > b){
        return a;
    }
    else {
        return b;
    }
}

int main(){
    int a,b,c,d;

    printf(" A: ");
    scanf("%d", &a);

    if(a<0){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf(" B: ");
    scanf("%d", &b);

    if(b<0){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf(" C: ");
    scanf("%d", &c);

    if(c<0){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf(" D: ");
    scanf("%d", &d);

    if(d<0){
        printf(" INVALID INPUT ");
        return 0;
    }

    printf("\n");

    int maxNumber = maximum(maximum(maximum(a,b),c),d);
    for(int i = maxNumber; i > 0; i--){
        printf(" ");
            if(a >= i){
                printf("X");
            }
            else{
                printf(" ");
            }
            printf(" ");
            if( b >= i){
                printf("X");
            }
            else{
                printf(" ");
            }
            printf(" ");
            if( c >= i){
                printf("X");
            }
            else{
                printf(" ");
            }
            printf(" ");
            if(d >= i){
                printf("X");
            }
            else{
                printf(" ");
            }
            printf(" ");
        printf("\n"); 

    }

    printf("---------");
    printf("\n");
    printf(" A B C D ");

    return 0;
}