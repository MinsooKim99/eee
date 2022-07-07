#include <stdio.h>
#include <string.h>

int main(){
	char input_str[15];

    printf("입력: ");
    gets(input_str);

    strrev(input_str);
	printf("뒤집기: %s\n",input_str);

	return 0;
}