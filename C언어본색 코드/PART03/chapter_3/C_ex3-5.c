#include <stdio.h>

int main(){
    FILE* stream1 = fopen("score.txt","r");
    FILE* stream2 = fopen("score_total.txt","w");
    int i, j, ret, num, input_num = -1;
    char name[20];
    double score_1, score_2, score_3, total;


    for(i=0;;i++){
        ret = fscanf(stream1,"%d %*c %s %lf %lf %lf",&num,name,&score_1,
            &score_2,&score_3);
        if(ret == -1)
            break;
        // printf("%d\n",ret);
        // printf("%d %s %lf %lf %lf\n",num,name,score_1,score_2,score_3);
        total = score_1 + score_2 + score_3;
        fprintf(stream2,"%d. %s 총점: %.2lf\n",num,name,total);
    }

    fclose(stream2);
    stream2 = fopen("score_total.txt","r");
    
    printf("번호 검색(0:exit): ");
    scanf("%d",&input_num);
    while(input_num != 0){
        for(i=0;;i++){
            ret = fscanf(stream2,"%d %*c %s %*s %lf",&num,name,&total);
            if(ret == -1){
                printf("목록에 없습니다.\n");
                break;
            }
            else if(num == input_num){
                printf("%d. %s 총점: %.2lf\n",num,name,total);
                break;
            }
            else
                continue;
        }
        fseek(stream2,0,SEEK_SET);
        printf("번호 검색(0:exit): ");
        scanf("%d",&input_num);
    }

    fclose(stream1);
    fclose(stream2);

    return 0;
}