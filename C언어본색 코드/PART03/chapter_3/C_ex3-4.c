#include <stdio.h>

int main(){
    FILE* stream1 = fopen("score.txt","r");
    FILE* stream2 = fopen("score_total.txt","w");
    int i, ret, num;
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
    

    fclose(stream1);
    fclose(stream2);

    return 0;
}