#include <stdio.h>
void func(int*,int (*)[2]);
int main(){
    int array1[8] = {1,2,3,4,5,6,7,8};
    int array2[8];
    int i;
    const int LEN = sizeof(array1)/sizeof(int);

    array2[0] = array1[LEN-1];
    for(i=1;i<LEN;i++){
        array2[i] = array1[i]-1;
    }

    for(i=0;i<LEN;i++){
        printf("%d ",array1[i]);
    }
    printf("\n");

    for(i=0;i<LEN;i++){
        printf("%d ",array2[i]);
    }

    return 0;
}