#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "myHeader.h"


void loop(int loops) {
    if (myConditional(loops)) {
        for (int i = 0; i < loops; i++) {
            printf("Loop %d\n", i);
        }
    }
    else {
        printf("I wont loop if more than 10");
    }
}

int myConditional(int input) {
    if (input >= 10) return false;
    return true;
}

int main(){
    int a, b;
    printf("Hello Friend\n");
    printf("Enter First Number:\n");
    scanf_s("%d", &a);
    printf("Enter Second Number:\n");
    scanf_s("%d", &b);
    int x = sum(a, b);
    printf("My name is %s\n",name());
    loop(x);
    return 0;
}
