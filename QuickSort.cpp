#include <stdio.h>

int numb = 10;
int data[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};

void quickSort(int *data, int start, int end){
	if (start >= end){ //���Ұ� 1���� ��� 
		return;
	}
	
	int key = start; //Ű�� ù��° ����
	int i = start + 1;
	int j = end;
	int temp;
	
	while(i <= j) { //������ ������ �ݺ� 
		while(data[i] <= data[key]){ //Ű ������ ū ���� ã�´� 
									 //���������� ��� data[i] >= data[key]
			i++;
		}
		while(data[j] >= data[key] && j > start){ //Ű ������ ���� ���� ã�´� 
			j--;								  //���������� ��� data[j] <= data[key] 
		}
		if (i > j){ //���� ������ ���¸� Ű ���� ��ü 
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

// �� ������ ��ǥ���� '���� ����'�˰����� ����Ѵ�.
// �� ������ ��� �ð� ���⵵�� O(N*logN)�̴�. 
// (���������� ���õ� ������ ������  �ɰ��� N*N�� ���شٰ� �����ϸ��.)
// �� ������ �־� �ð� ���⵵�� O(N^2)�̴�. 
// Pivot(��������п���, �ǹ� �Ǵ� �ǹ� ���д� Ư�� ����� �����ϱ� ���� 
// ������ �˰��� �� ���� ���� ���õ� ����� ����)���� ������ ���� ���� O(N*N)�� ��.
//Ref. YOUTUBE[����] 20220220 1�� 
