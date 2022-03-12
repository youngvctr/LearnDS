#include <iostream>
#include <vector>

using namespace std;

vector<int> makeTable(string pattern) {
	int patternSize = pattern.size();
	vector<int> table(patternSize, 0);
	int j = 0;
	for(int i= 1; i<patternSize; i++){
		while(j > 0 && pattern[i] != pattern[j]){
			j = table[j -1];
		}
		if(pattern[i] == pattern[j]) {
			table[i] = ++j;
		}
	}
	return table;
}

void KMP(string parent, string pattern) {
	vector<int> table = makeTable(pattern);
	int parentSize = parent.size();
	int patternSize = pattern.size();
	int j = 0;
	for(int i=0; i < parentSize; i++){
		while (j > 0 && parent[i] != pattern[j]) {
			j = table[j - 1];
		}
		if(parent[i] == pattern[j]){
			if(j == patternSize - 1){
				printf("%d번째에서 찾았습니다.\n", i - patternSize+ 2);
				j = table[j];
			}else{
				j++;
			}
		}
	}
}

int main(void) {
	string parent = "ababacabacaabacaaba";
	string pattern = "abacaaba";
	//vector<int> table = makeTable(pattern);
	//for (int i=0; i<table.size(); i++){
	//	printf("%d ", table[i]);
	//}
	KMP(parent, pattern);
	return 0;
}

//특정한 긴 글에서 어떤 문자열이 몇 번째에서 발견되는지를 찾을 수 있음.
//단순 비교 문자 알고리즘, KMP 문자열 패턴 알고리즘

