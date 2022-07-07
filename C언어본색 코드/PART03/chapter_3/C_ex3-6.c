#include <stdio.h>

int main(){
    FILE* stream = fopen("score.txt","r");

    fseek(stream,  0, SEEK_END);
    fprintf(stdout, "score size : %d byte \n", ftell(stream));


    fclose(stream);

    return 0;
}