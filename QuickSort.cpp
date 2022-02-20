#include <stdio.h>

int numb = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if (start >= end){ //원소가 1개인 경우 
		return;
	}
	
	int key = start; //키는 첫번째 원소
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j) { //엇갈릴 때까지 반복 
		while(data[i] <= data[key]){ //키 값보다 큰 값을 찾는다 
									 //내림차순의 경우 data[i] >= data[key]
			i++;
		}
		while(data[j] >= data[key] && j > start){ //키 값보다 작은 값을 찾는다 
			j--;								  //내림차순의 경우 data[j] <= data[key] 
		}
		if (i > j){ //현재 엇갈린 상태면 키 값과 교체 
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}else{
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	} 
	
	quickSort(data, start, j-1);
	quickSort(data, j + 1, end); 
}

int main(void){
	
	quickSort(data, 0, numb - 1);
	for (int i=0; i< numb; i++){
		printf("%d ", data[i]);
	}
	return 0;
} 

// 퀵 정렬은 대표적인 '분할 정복'알고리듬을 사용한다.
// 퀵 정렬의 평균 시간 복잡도는 O(N*logN)이다. 
// (직관적으로 제시된 정렬을 반으로  쪼개서 N*N을 해준다고 생각하면됨.)
// 퀵 정렬의 최악 시간 복잡도는 O(N^2)이다. 
// Pivot(선형대수학에서, 피벗 또는 피벗 성분는 특정 계산을 수행하기 위한 
// 임의의 알고리즘 에 의해 먼저 선택된 행렬의 성분)으로 설정된 값에 따라서 O(N*N)이 됨.
//Ref. YOUTUBE[동빈나] 20220220 1복 
