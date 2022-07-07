#include <stdio.h>
void func(int*,int (*)[2]);
int main(){
    int array1[4] = {10,20,30,40};
    int array2[2][2] = {50,60,70,80};

    func(array1,array2);
    
    return 0;
}

void func(int* p1,int (*p2)[2]){
    printf("%d %d %d %d\n",p1[0],p1[1],p1[2],p1[3]);
    printf("%d %d %d %d\n",p2[0][0],p2[0][1],p2[1][0],p2[1][1]);
}