#include <stdio.h>

int number = 8;
int sorted[8]; //정렬 배열은 반드시 전역 변수로 선언한다.

void merge(int a[], int m, int middle, int n) // m - middle - n (시작-중간-끝) 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	//작은 순서대로 배열에 삽입
	while(i <= middle && j <= n){
		if(a[i] <= a[j]){
			sorted[k] = a[i];
			i++;
		} else{
			sorted[k] = a[j];
			j++;
		}
		k++;
	} 
	//남은 데이터도 삽입
	if(i > middle){
		for(int t=j; t <= n; t++){
			sorted[k] = a[t];
			k++;
		}
	} else {
		for(int t=i; t <= middle; t++){
			sorted[k] = a[t];
			k++;
		}
	}
	//정렬된 배열을 삽입
	for (int t=m; t <= n; t++){
		a[t] = sorted[t];
	} 
}

void mergeSort(int a[], int m, int n){
	//크기가 1보다 큰 경우
	if(m < n){
		int middle = (m + n) / 2;
		mergeSort(a, m, middle);
		mergeSort(a, middle + 1, n);
		merge(a, m, middle, n);
	} 
}

int main(void){
	int array[number] = {7, 6, 5, 8, 3, 5, 9, 1};
	mergeSort(array, 0, number -1);
	for(int i=0; i< number; i++){
		printf("%d ", array[i]);
	}
}

//병합정렬의 시간복잡도는 O(N*logN)이다.
//이미 정렬이 되어있는 원소들을 너비로 만들고, 모든 원소를 개별로 구분하므로 N개의 너비가 있다. (데이터의 개수 N개가 곧 배열을 정렬하는 시간복잡도가 됨.) 
//깊이는 logN개의 깊이가 됨. (ex)원소끼리 두 개씩 합쳐서 나타내면 log2(8)=3인 경우로 계산할 수 있고, 시간복잡도O는 8*3이 됨.
