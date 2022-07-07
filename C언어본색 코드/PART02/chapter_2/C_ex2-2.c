#include <stdio.h>
#define ROW_LEN 3
#define COL_LEN 3
int main(){
    int i, j, input_num;
    int YHapart[ROW_LEN][COL_LEN];

    for(i=ROW_LEN-1;i>=0;i--){
        for(j=0;j<COL_LEN;j++){
            printf("%d층 %d호: ",ROW_LEN-i,j+1);
            scanf("%d",&input_num);
            // printf("\n");

            YHapart[i][j] = input_num;
        }
        // printf("\n");
    }

     for(i=0;i<ROW_LEN;i++){
        for(j=0;j<COL_LEN;j++){
            printf("%d ",YHapart[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}