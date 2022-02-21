#include <iostream>
#include <vector>
#include <algorithm>

//벡터와 페어를 활용한 방식  
using namespace std;

bool compare(pair<string, pair<int, int> > a,
			 pair<string, pair<int, int> > b) {
			 	if (a.second.first == b.second.first){
			 		return a.second.second > b.second.second;
				 } else {
				 	return a.second.first > b.second.first;
				 }
			 }

int main(void){
	vector<pair<string, pair<int, int> > > v; //첫 번째 데이터형이 int, 두 번째 데이터형은 string 
	v.push_back(pair<string , pair<int, int> >("P H O ", pair<int, int>(90, 19961222)));
	v.push_back(pair<string , pair<int, int> >("L T Y ", pair<int, int>(85, 19930518)));
	v.push_back(pair<string , pair<int, int> >("N D B ", pair<int, int>(90, 19930203)));
	v.push_back(pair<string , pair<int, int> >("K J G ", pair<int, int>(98, 19921207)));
	v.push_back(pair<string , pair<int, int> >("L S W ", pair<int, int>(79, 19900302)));
 
	sort(v.begin(), v.end(), compare);
	for (int i=0; i< v.size(); i++){
		cout << v[i].first << ' ';
	}	
}

//정렬하는 기준이 3개 이상인 경우에는 class로 선언해서 코드를 작성하는 것이 효율적이다.
 
