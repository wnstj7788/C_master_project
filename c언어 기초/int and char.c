

#include<stdio.h>

int main(void){

  char x = 'A';  
  printf("%c",x); // 출력값 A
  char y = 65;
  printf("%c",y); // 출력값 A 아스키 코드 65 = A 
	int z = 65;
	printf("%c",z); // 출력하는 값이 문자형이면 아스키 코드 값 참조  
  char i = 'B';
  printf("%d",i); // 66출력 
  return 0;
}
