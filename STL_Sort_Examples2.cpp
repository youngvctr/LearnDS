#include <iostream>
#include <vector>
#include <algorithm>

//벡터와 페어를 활용한 방식  
using namespace std;

int main(void){
	vector<pair<int, string> > v; //첫 번째 데이터형이 int, 두 번째 데이터형은 string 
	v.push_back(pair<int , string>(90, "P H O "));
	v.push_back(pair<int , string>(85, "L T Y "));
	v.push_back(pair<int , string>(82, "N D B "));
	v.push_back(pair<int , string>(98, "K J G "));
	v.push_back(pair<int , string>(79, "L S W "));
 
	sort(v.begin(), v.end());
	for (int i=0; i< v.size(); i++){
		cout << v[i].second << ' ';
	}	
}

