#include <stdio.h>
#define MAX_LEN 9
int main(){
    int array[MAX_LEN];
    int i, input_num;

    printf("수 입력:");
    scanf("%d",&input_num);
    for(i=0;i<MAX_LEN;i++){
        array[i] = input_num * (i+1);
        printf("%d x %d = %d\n",input_num, i+1, array[i]);
    }

    return 0;
}