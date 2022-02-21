#include <stdio.h>

int number = 8;
int sorted[8]; //���� �迭�� �ݵ�� ���� ������ �����Ѵ�.

void merge(int a[], int m, int middle, int n) // m - middle - n (����-�߰�-��) 
{
	int i = m;
	int j = middle + 1;
	int k = m;
	
	//���� ������� �迭�� ����
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
	//���� �����͵� ����
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
	//���ĵ� �迭�� ����
	for (int t=m; t <= n; t++){
		a[t] = sorted[t];
	} 
}

void mergeSort(int a[], int m, int n){
	//ũ�Ⱑ 1���� ū ���
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

//���������� �ð����⵵�� O(N*logN)�̴�.
//�̹� ������ �Ǿ��ִ� ���ҵ��� �ʺ�� �����, ��� ���Ҹ� ������ �����ϹǷ� N���� �ʺ� �ִ�. (�������� ���� N���� �� �迭�� �����ϴ� �ð����⵵�� ��.) 
//���̴� logN���� ���̰� ��. (ex)���ҳ��� �� ���� ���ļ� ��Ÿ���� log2(8)=3�� ���� ����� �� �ְ�, �ð����⵵O�� 8*3�� ��.
