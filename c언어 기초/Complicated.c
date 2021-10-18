/*
//복합대입연산자 연산자가 여러개
#include <stdio.h>

int main(void){
  int x = 100;
  printf("현재의 x는 %d 입니다\n",x);
  x += 50; // x = x + 50
  printf("현재의 x는 %d 입니다\n",x);
  x -= 50; // x = x - 50
  //컴퓨터는 x - 50이라고 인식하지 않음
  //x에 x - 50한 값을 x로 지정한다고 인식  왼쪽 값을 오른쪽 값으로 변환한다고 인식
  printf("현재의 x는 %d 입니다\n",x);
  x *= 50;
  printf("현재의 x는 %d 입니다\n",x);
  x /= 50;
  printf("현재의 x는 %d 입니다\n",x);
  x %= 3;
  printf("현재의 x는 %d 입니다\n",x);
  return 0;

}
*/