#include <stdio.h>
int main()
{
    char a='a';
    char b='A';
    char c='\n';
    char d='\t';

    printf("%c%c%d%c",a,d,a,c);
    printf("%c%c%d%c",b,d,b,c);
    
    return 0;
}