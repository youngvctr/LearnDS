#include <stdio.h>

// �θ� ��带 ã�� �Լ� 
int getParent(int parent[], int x){
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

// �� �θ� ��带 ��ġ�� �Լ�(�θ� ��带 ��ĥ ���� �� ���� ������ ��ģ��.) 
int unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a < b) parent[b] = a;
	else parent[a] = b;
}

// ���� �θ� �������� Ȯ��
bool findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a==b) return true;
	return false;
} 

int main(void){
	int parent[11];
	for(int i=1; i<=10; i++){
		parent[i] = i;
	}
	unionParent(parent, 1, 2);
	unionParent(parent, 2, 3);
	unionParent(parent, 3, 4);
	unionParent(parent, 5, 6);
	unionParent(parent, 6, 7);
	unionParent(parent, 7, 8);
	printf("2�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 2, 5));
	unionParent(parent, 2, 4);
	printf("2�� 5�� ����Ǿ� �ֳ���? %d\n", findParent(parent, 2, 5));
}




