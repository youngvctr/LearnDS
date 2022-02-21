#include <iostream>
#include <stdio.h>

using namespace std;


void recursion(int init){
	if (init == 5) return;
	else{
		recursion(init + 1);
		printf("%d ", init + 1);
	}
}

int main(void){
	
	recursion(0);
	
	return 0;
}
