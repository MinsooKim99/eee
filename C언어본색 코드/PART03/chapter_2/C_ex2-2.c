#include <stdio.h>
#include <string.h>

int main(){
	char input_str[10][15], temp[15];
	int i=0, j=0, max;

	printf("입력을 종료하려면 그냥 엔터를 누르세요.\n");

	//입력
	for(i=0;i<10;i++){
		printf("%d번째? ",i+1);
		gets(temp);
		
		//문자열 길이 점검
		if(strlen(temp)==0){
			max = i;
			break;
		}
		strcpy(input_str[i], temp);
	}

	//정렬
	for(i=max; i>=0; i--){
		for(j=max; j>i; j--){
			if( strcmp(input_str[i], input_str[j]) > 0 ){
				strcpy(temp, input_str[i]);
				strcpy(input_str[i], input_str[j]);
				strcpy(input_str[j], temp);
			}
		}
	}


	//출력
	for(i=0;i<max+1;i++){
		printf("%s  ", input_str[i]);
	}
	puts("");
	return 0;
}