#include <iostream>
#include <vector>
#include <queue> //queue를 이용한 방식(stack을 이용한 방식도 있음) 
#define MAX 10

using namespace std;

int n, inDegree[MAX];
vector<int> a[MAX];

void topologySort(){ //위상정렬은 방향그래프인데 사이클이 존재하지 않는 그래프이다. DAG(Directed Acyclic Graph) 
	int result[MAX];
	queue<int> q;
	// 진입 차수가 0인 노드를 큐에 삽입한다.
	
	for(int i=1; i <= n; i++){
		if(inDegree[i] == 0) q.push(i);
	}
	//위상 정렬이 완전히 수행되려면 N개의 노드를 방문한다.
	for(int i=1; i <=n; i++){
		// n개를 방문하기 전에 큐가 빈다면 사이클이 발생한 것
		if(q.empty()){
			printf("사이클이 발생했습니다.");
			return;
		} 
		int x = q.front();
		q.pop();
		result[i] = x;
		for(int i=0; i< a[x].size(); i++){
			int y=a[x][i];
			if(--inDegree[y] == 0){
				q.push(y);
			}
		}
	}
	for(int i=1; i<=n; i++){
		printf("%d ", result[i]);
	}
}

int main(void){
	n = 7;
	a[1].push_back(2);
	inDegree[2]++;
	a[1].push_back(5);
	inDegree[5]++;
	a[2].push_back(3);
	inDegree[3]++;
	a[3].push_back(4);
	inDegree[4]++;
	a[4].push_back(6);
	inDegree[6]++;
	a[5].push_back(6);
	inDegree[6]++;
	a[6].push_back(7);
	inDegree[7]++;
	topologySort();
}
