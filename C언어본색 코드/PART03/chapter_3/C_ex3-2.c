#include <stdio.h>

int main(){
    FILE* stream = fopen("99.txt","w");
    int i,j,result;

    for(i=1;i<10;i++){
        for(j=1;j<10;j++){
            fputc(i+48,stream);
            fputc('*',stream);
            fputc(j+48,stream);
            fputc('=',stream);
            result = i*j;
            if (result/10)
                fputc((result/10)+48,stream);
            fputc((result%10)+48,stream);
            fputc('\n',stream);
        }
    }

    fclose(stream);

    return 0;
}