#include <stdio.h>

int main(void){
	
	int nPos;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (int i=0; i<sizeof(array)/sizeof(int); i++){
		for (int j=0; j<sizeof(array)/sizeof(int) -1 - i; j++){
			if (array[j] > array[j+1]){ //부등호 방향이 바뀌면 내림차순으로 정렬됨 
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

//본 알고리듬의 시간복잡도는 O(N*N)이다. 
//i에 대한 for문을 돌 때마다 f(10) = 10 + 9 + 8 + ... + 1 = 10(10+1)/2 이기 때문이다.
//선택정렬보다 더 느리다. 
