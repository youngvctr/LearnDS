//�ǹ��� ������ �� 
#include <iostream>
#include <algorithm>

using  namespace std;

class Student { //���ο� �ڷ����� �������! 
public:
	string name;
	int score;
	Student(string name, int score){�� 
		this->name = name;
		this->score = score;
	}
	// ���� ������ '������ ���� ����'
	bool operator <(Student &student){
		return this->score < student.score;
	} 
};

bool compare(int a, int b){
	return a > b; //��������, �������� ������ ������ ��Ÿ����.	
}

int main(void){
	Student students[] = {
		Student("K J H  ", 90),
		Student("K O M  ", 93),
		Student("A B C  ", 97),
		Student("O T Y  ", 87),
		Student("S T M  ", 92)
	};
	sort(students, students + 5);
	for (int i = 0; i < 5; i++){
		cout << students[i].name << ' ';
	}
}

/*
int main(void) {
	int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
	sort(a, a + 10, compare);
	for(int i=0; i< 10; i++){
		cout << a[i] << ' ';
	}
}
*/
