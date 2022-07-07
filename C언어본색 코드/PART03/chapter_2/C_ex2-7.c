#include <stdio.h>
#include <string.h>

typedef struct student{
    char no[10];
    char name[20];
    double eng_score;
    double kor_score;
}STUDENT;

int main(){
    STUDENT stu;

    printf("학번 입력: ");
    gets(stu.no);
    printf("이름 입력: ");
    gets(stu.name);
    printf("영어 점수 입력: ");
    scanf("%lf",&stu.eng_score);
    printf("국어 점수 입력: ");
    scanf("%lf",&stu.kor_score);

    if(strstr(stu.no,"2010")){
        printf("이름: %s\n영어: %.2lf\n국어: %.2lf",stu.name,stu.eng_score,stu.kor_score);
    }
    
    return 0;
}