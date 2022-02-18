//1. 다음 정수 배열인 A = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9}가 있다. 
//   A가 오름차순으로 출력되도록 작성하시오. 

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

// 본 알고리듬은 가장 작은 수를 앞으로 보내는 형태인 선택정렬이 사용되었다. 
//본 알고리듬의 시간복잡도는 O(N*N); N(N+1)/2 이다.
//본 알고리듬의 시간복잡도로 볼 때 알고리듬의 시간복잡도가 크므로 매우 비효율적이다.
//Ref. YOUTUBE[동빈나] 
