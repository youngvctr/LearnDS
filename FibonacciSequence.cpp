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
	//printf("%d ", dp(50)); //��ȿ���� 2^50(�ð����⵵)
	printf("%u ", dp(50));
}

//%d 10����(������), %f �Ǽ���, %e ������, %o 8����, %x 16����, 
//%u ��ȣ ���� 10����, %g �Ǽ��� �ڵ����, %p �������� �ּ�, %c �ϳ��� ���ڷ� ���, %s ���ڿ� 
