#include <stdio.h>
int main(){
    int array[]={10,30,40,30,20};
    int sum = 0;
    int* p = array;

    for(int i=0;i<sizeof(array)/sizeof(int);i++){
        sum += p[i];
    }

    printf("sum = %d\n",sum);

    return 0;
}