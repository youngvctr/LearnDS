#include <stdio.h>

int main(void){
	
	int nPos;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (int i=0; i<sizeof(array)/sizeof(int); i++){
		for (int j=0; j<sizeof(array)/sizeof(int) -1 - i; j++){
			if (array[j] > array[j+1]){ //�ε�ȣ ������ �ٲ�� ������������ ���ĵ� 
				nPos = array[j];
				array[j] = array[j + 1];
				array[j+1] = nPos;
			}
		}
	}
	
	for (int i=0; i < sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}

//�� �˰����� �ð����⵵�� O(N*N)�̴�. 
//i�� ���� for���� �� ������ f(10) = 10 + 9 + 8 + ... + 1 = 10(10+1)/2 �̱� �����̴�.
//�������ĺ��� �� ������. 
