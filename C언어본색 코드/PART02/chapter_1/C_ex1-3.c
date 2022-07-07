#include <stdio.h>
#define MAX_LEN 15
int main(){
    int i;
    int array_sum = 0;
    int array_sum_row[3] = {0,0,0}, array_sum_col[5] = {0,0,0,0,0};
    int array[MAX_LEN] = {90,78,77,98,98,80,45,67,88,57,88,99,65,55,74};


    for(i=0;i<MAX_LEN;i++){
        array_sum += array[i];

        if((i/5) == 0)
            array_sum_row[0] += array[i];
        else if((i/5) == 1)
            array_sum_row[1] += array[i];
        else
            array_sum_row[2] += array[i];

        if((i%5) == 0)
            array_sum_col[0] += array[i];
        else if((i%5) == 1)
            array_sum_col[1] += array[i];
        else if((i%5) == 2)
            array_sum_col[2] += array[i];
        else if((i%5) == 3)
            array_sum_col[3] += array[i];
        else if((i%5) == 4)
            array_sum_col[4] += array[i];
        
    }


    printf("총합: %d\n",array_sum);
    printf("행의 합\n");
    for(i=0; i<3;i++)
        printf("%d행 합: %d\n",i+1,array_sum_row[i]);

    printf("열의 합\n");
    for(i=0; i<5;i++)
        printf("%d열 합: %d\n",i+1,array_sum_col[i]);

    return 0;
}