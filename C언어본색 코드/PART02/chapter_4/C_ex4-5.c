#include <stdio.h>
int main(){
    char* string[2] = {"I Love C", "Hello World"};

    printf("%s",string[0]);
    printf("%s",string[1]+5);


    return 0;
}