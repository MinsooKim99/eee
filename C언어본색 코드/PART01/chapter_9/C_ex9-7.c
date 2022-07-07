#include <stdio.h>

int Alpha(char);
int main(){
    
    char input_char;
    scanf("%c",&input_char);
    
    printf("%d\n",Alpha(input_char));
    
    return 0;
}
int Alpha(char c){
    if (c < 91)
        return c - 64;
    else
        return c - 96;
}