#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "myHeader.h"
#include "myFileWriter.h"

/* hackerrank.com security question */
#include <string.h>
#include <math.h>



/*void loop(int loops) {
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
    FILE* file;
    file= makeFile("myTest");
    writeToFile(file, "Hello This is my test file.\nMy Name is Cybergoose!\n");
    closeFile(file);
    file= appendToFile("myTest", "Just adding some text here\n");
    closeFile(file);
    return 0;
}*/

int main() {
    char strin[5];
    char nstr[] = "";
    scanf("%5[^\n]", strin);

    for (int i = 0; i < strlen(strin); i++) {
        int x = strin[i] + 1;
        if (x > 57) {
            x -= 10;
        }
        char c = x;
        strin[i] = c;
        /*printf("%s", &nstr);*/
        /*printf("%c\n", x);*/
        /*printf("%c\n", strin[i]);*/
    }
    printf("%s", strin);
    /*printf("%s", nstr);*/
    /*char *c = s;
    printf("%c", c);*/
    return 0;
}
