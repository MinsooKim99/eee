#include <stdio.h>
#define MAX_LEN 10
int main(){
    int i, input_num, sum = 0;
    int array[MAX_LEN];

    for(i=0;i<MAX_LEN;i++){
        printf("%d: ", i+1);
        scanf("%d",&input_num);
        array[i] = input_num;
        sum+=array[i];
        printf("\n");
    }


    printf("평균: %.2lf",(double)sum/10);

    return 0;
}