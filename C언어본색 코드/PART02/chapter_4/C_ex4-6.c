#include <stdio.h>
int main(){
    char* array1 = "ABCD";
    char array2[] = "ABCD";
    int a=1;
    int* i=&a;
    // array1[0] = 'X'; // error
    array2[0] = 'X';

    printf("%s\n%s\n",array1,array2);
    *i+=1;
    printf("%d",*i);

    return 0;
}