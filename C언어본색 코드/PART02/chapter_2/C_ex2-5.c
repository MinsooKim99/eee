#include <stdio.h>
#define ROW_LEN 3
#define COL_LEN 3
int main(){
    int i,j;
    int array[2][3]={1,2,3,4,5,6};

    // for(i=0;i<2;i++){
    //     for(j=0;j<3;j++){
    //     }
    //     printf("\n");
    // }

     for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d:%d ",*(*(array+i)+j),*(array+i)+j);
        }
        printf("\n");
    }
    
    return 0;
}