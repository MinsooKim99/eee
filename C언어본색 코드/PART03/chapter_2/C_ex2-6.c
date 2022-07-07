#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char input_str[15];
	char* p = input_str;
	int i;

	printf("입력: ");
    gets(input_str);

	printf("개수: %d\n",strlen(input_str));

	for(i=0;i<strlen(input_str);i++){
		if (isupper(input_str[i])){
			p[i] = input_str[i] + 32;
			// input_str[i] = input_str[i] + 32;
		}
		else{
			p[i] = input_str[i] - 32;
			// input_str[i] = input_str[i] - 32;
		}
	}

	printf("결과: %s",p);

	return 0;
}