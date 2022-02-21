//실무에 적합한 형 
#include <iostream>
#include <algorithm>

using  namespace std;

class Student { //새로운 자료형을 만들었다! 
public:
	string name;
	int score;
	Student(string name, int score){식 
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 낮은 순서'
	bool operator <(Student &student){
		return this->score < student.score;
	} 
};

bool compare(int a, int b){
	return a > b; //오름차순, 내림차순 정렬의 기준을 나타낸다.	
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
