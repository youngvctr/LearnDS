#include <stdio.h>
#include <iostream>

int d[100];

//fibonacci sequence
int dp(int x){
	if (x == 1) return 1;
	if (x == 2) return 1;
	if (d[x] != 0) return d[x]; 
	return d[x] = dp(x - 1) + dp(x - 2);
}

int main(void){
	//printf("%d ", dp(50)); //비효율적 2^50(시간복잡도)
	printf("%u ", dp(50));
}

//%d 10진수(정수형), %f 실수형, %e 지수형, %o 8진수, %x 16진수, 
//%u 부호 없는 10진수, %g 실수형 자동출력, %p 포인터의 주소, %c 하나의 문자로 출력, %s 문자열 
