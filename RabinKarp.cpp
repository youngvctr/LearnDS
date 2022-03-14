#include <stdio.h>
#include <iostream>


using namespace std;

void findString(string parent, string pattern) {
	int parentSize = parent.size();
	int patternSize = pattern.size();
	int parentHash = 0, patternHash = 0, power = 1;
	for (int i=0; i <= parentSize - patternSize; i++){
		if(i == 0) {
			for (int j=0; j < patternSize; j++){
				parentHash += parent[patternSize - 1 - j] * power;
				patternHash += pattern[patternSize - 1 - j] * power;
				if (j < patternSize - 1) power = power * 403;//2; �ǵ������� �����÷ο찡 �߻��ϵ��� ���� 
			}
		} else {
			parentHash = 403 * (parentHash - parent[i - 1] * power ) + parent[patternSize - 1 + i];//2 * (parentHash - parent[i - 1] * power ) + parent[patternSize - 1 + i];
			printf("%d ) �ؽ� �� �� : %d %d\n", i + 1, parentHash, patternHash);
		}
		if (parentHash == patternHash){
			bool finded = true;
			for (int j = 0; j < patternSize; j++){
				if(parent[i + j] != pattern[j]){
					finded = false;
					break;
				}
			}
			if(finded) {
				printf("%d��°���� �߰��߽��ϴ�. \n", i + 1);
			}
			
		}
	}
}

int main(void){
	string parent = "ababacabacaabacaaba";
	string pattern = "abacaaba";
	findString(parent, pattern);
	
	return 0;
}
