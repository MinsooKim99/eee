#include <stdio.h>
#include <locale.h>

int main(){
    FILE* stream = fopen("report_card.txt","w");
    int i, input_num = -1;
    int num,mid_term,final_exam,attendance,report,total;
    char name[20],grade;

    fprintf(stream,"학번\t이름\t중간고사\t기말고사\t출석\t과제\t총점\t학점\n");

    while(input_num != 0){
        fprintf(stdout,"학번 이름(EngOnly) 중간고사 기말고사 출석 과제 총점 학점\n");
        fscanf(stdin,"%d %s %d %d %d %d %d %c",&num,name,&mid_term,&final_exam,
            &attendance,&report,&total,&grade);

        fprintf(stream,"%d\t%s\t%d\t%d\t%d\t%d\t%d\t%c\n",num,name,mid_term,final_exam,
            attendance,report,total,grade);

        printf("계속?(0:exit)");
        scanf("%d",&input_num);
    }

    fclose(stream);

    return 0;
}