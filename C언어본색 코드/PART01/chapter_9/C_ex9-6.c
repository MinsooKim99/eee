#include <stdio.h>

int Add(int, int);
void Count();

static int i = 0;
int main(void) {
  int a, b;
  while(i<100){
    printf("숫자 2개 입력: ");
    scanf("%d %d",&a, &b);
    
    if (a || b){
      printf("%d + %d = %d\n", a, b, Add(a,b));
      Count();
    }
    else{
      printf("총 연산 수: %d", i);
      return 0;
    }
  }  
  return 0;
}
int Add(int x, int y){
  return x + y;
}
void Count(){
  i++;
}
