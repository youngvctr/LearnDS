#include <stdio.h>
#include <iostream>

using namespace std;

int number = 15;

//�ϳ��� ��� ������ ���� 
typedef struct node *treePointer;
typedef struct node {
	int data;
	treePointer leftChild, rightChild;
} node;

//���� ��ȸ(Preorder Traversal)
//�ڱ��ڽ� ó�� -> ���� �ڽ� �湮 -> ������ �ڽ� �湮
//������ȸ ����
void preorder(treePointer ptr){
	if(ptr){
		cout << ptr->data << ' ';
		preorder(ptr->leftChild);
		preorder(ptr->rightChild);
	}
}


//���� ��ȸ(Inorder Traversal)
//���� �ڽ� �湮 -> �ڱ��ڽ� ó�� -> ������ �ڽ� �湮
void inorder(treePointer ptr){
	if(ptr){
		inorder(ptr->leftChild);
		cout << ptr->data << ' ';
		inorder(ptr->rightChild);
	}
}


//���� ��ȸ(Postorder Traversal)
//���� �ڽ� �湮 -> ������ �ڽ� �湮 -> �ڱ��ڽ� ó�� 
void postorder(treePointer ptr){
	if(ptr){
		postorder(ptr->leftChild);
		postorder(ptr->rightChild);
		cout << ptr->data << ' ';
	}
}

int main(void) {
	node nodes[number + 1];
	for(int i = 1; i <= number; i++){
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	
	for(int i = 1; i <= number; i++){
		if(i % 2 == 0){
			nodes[i / 2].leftChild = &nodes[i];
		}else{
			nodes[i / 2].rightChild = &nodes[i];
		}
	}
	
	preorder(&nodes[1]);
	printf("\n");
	inorder(&nodes[1]);	
	printf("\n");
	postorder(&nodes[1]);
	
	return 0;
}
