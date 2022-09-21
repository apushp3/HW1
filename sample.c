#include<stdio.h>

int foo(int a, int b){
    a = 2*a;
    b = 2*b;
    return (a + b);
}

int main(){
    int x = 99;
    int a = 10;
    int b = 20;
    x = foo(a,b);

    printf("a %d b %d x %d", a, b, x);
    return 0;
}