#include <iostream>

using namespace std;

int main(void){ //최적의 코드가 아닌 그리디 자료구조 형태 
	int n, result = 0;
	cin >> n;
	result += n / 500;
	n %= 500;
	result += n / 100;
	n %= 100;
	result += n/50;
	n %= 50;
	result += n / 10;
	cout << result;
	return 0;
} 
