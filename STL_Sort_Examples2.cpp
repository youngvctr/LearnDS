#include <iostream>
#include <vector>
#include <algorithm>

//���Ϳ� �� Ȱ���� ���  
using namespace std;

int main(void){
	vector<pair<int, string> > v; //ù ��° ���������� int, �� ��° ���������� string 
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

