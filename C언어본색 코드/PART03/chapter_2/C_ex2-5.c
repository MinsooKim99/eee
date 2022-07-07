#include <stdio.h>
#include <stdlib.h>

int main(){
	char input[15];
    int output;

    printf("입력: ");
    gets(input);

    printf("문자: %s\n",input);
    output = atoi(input);

    printf("정수: %d",output);

	return 0;
}