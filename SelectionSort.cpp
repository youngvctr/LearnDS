//1. ���� ���� �迭�� A = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9}�� �ִ�. 
//   A�� ������������ ��µǵ��� �ۼ��Ͻÿ�. 

#include <stdio.h>

int main(void){

	int nNum, nMin, nPos;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (int i=0; i < sizeof(array)/sizeof(int); i++){
		nMin = 9999;
		for (int j=i; j < sizeof(array)/sizeof(int); j++){
			if (nMin > array[j]){
				nMin = array[j];
				nPos = j;
			}
		}
		
		nNum = array[i];
		array[i] = array[nPos];
		array[nPos] = nNum;
	}
	
	for (int i=0; i< sizeof(array)/sizeof(int); i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}

// �� �˰����� ���� ���� ���� ������ ������ ������ ���������� ���Ǿ���. 
//�� �˰����� �ð����⵵�� O(N*N); N(N+1)/2 �̴�.
//�� �˰����� �ð����⵵�� �� �� �˰����� �ð����⵵�� ũ�Ƿ� �ſ� ��ȿ�����̴�.
//Ref. YOUTUBE[����] 
