#include <stdio.h>

int main(void){
	
	int i, j, temp;
	int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
	
	for (i=0; i<sizeof(array)/sizeof(int) - 1; i++){
		
		j = i;
		while (array[j] > array[j+1]){
			temp = array[j];
			array[j] = array[j+1];
			array[j+1] = temp;
			j--;
		}
	}
	
	for (i=0; i<10; i++){
		printf("%d ", array[i]);
	}
	
	return 0;
}

// 삽입정렬의 경우 거의 정렬되어있는 배열에서 굉장히 빠른 속도를 자랑한다.
// 하지만 시간복잡도를 계산했을 때 10 + 9 + 8 + ... + 1 = N(N+1)/2 = O(N*N)이다.
 
