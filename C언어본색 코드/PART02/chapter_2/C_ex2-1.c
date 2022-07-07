#include <stdio.h>
#define ROW_LEN 4
#define COL_LEN 2
int main(){
    int i, j;
    int array1[COL_LEN][ROW_LEN] = {{1,2,3,4},{5,6,7,8}};
    int array2[ROW_LEN][COL_LEN];
    int temp;

    for(i=0;i<COL_LEN;i++){
        for(j=0;j<ROW_LEN;j++){
            array2[j][i] = array1[i][j];
        }
    }

    for(i=0;i<ROW_LEN;i++){
        temp = array2[i][0];
        array2[i][0] = array2[i][1];
        array2[i][1] = temp;
    }

    printf("\n");

    for(i=0;i<COL_LEN;i++){
        for(j=0;j<ROW_LEN;j++){
            printf("%d ",array1[i][j]);
        }
        printf("\n");

    }

    printf("\n");

    for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d ",array2[i][j]);
        }
        printf("\n");
    }

    
    return 0;
}