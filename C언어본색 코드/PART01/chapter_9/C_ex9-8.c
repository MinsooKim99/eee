#include <stdio.h>

int sum(int);
int main(){
    int input_num;
    scanf("%d",&input_num);

    printf("%d\n",sum(input_num));

    return 0;
}
int sum(int n){
    if(n <= 1)
        return 1;
    else
    return n + sum(n-1);
}