#include <stdio.h>
int main(){
    int i;
    char array[6]={'A','B','C'};

    for(i=0;i<3;i++){
        printf("%c ",array[i]);
    }
    printf("\n");

    array[5] = array[0];
    array[4] = array[1];
    array[3] = array[2];
    
    for(i=0;i<6;i++){
        printf("%c ",array[i]);
    }


    return 0;
}