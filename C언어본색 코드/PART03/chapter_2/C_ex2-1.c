#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
int main(){
    char input_str[MAX_SIZE];
    char output_str[MAX_SIZE] = {0,};
    char* p = NULL;
    int i;

    printf("입력: ");
    scanf("%s",input_str);
    
    p = strlwr(input_str);
    // printf("%d",strlen(p));

    for(i=0;i<strlen(p);i++){
        if((p[i]>=96) && (p[i]<=122)){
            output_str[p[i]-97] += 1;
        }
    }

    // printf("%d\n",output_str[0]);

    for(i=0;i<26;i++){
        if (output_str[i] != 0){
            printf("%c: %d\n",i+97,output_str[i]);
            }
    }


    return 0;
}