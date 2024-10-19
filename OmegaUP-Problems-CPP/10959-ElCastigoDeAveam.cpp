#include <iostream>
using namespace std;
/*

https://omegaup.com/problem/collection/problemLevelBasicIntroductionToProgramming/?language=all&query=&order_by=problem_id&sort_order=desc&difficulty=all&quality=onlyQualityProblems&tag[]=problemTagMatrices


*/
#define MAXF 100
#define MAXC 100

int main(int argc, char *argv[]) {
		
	int Mat[MAXF][MAXC];
	int O[2500] = {0};
	int N,M;
	int mayor = 0;
	
	cin >> N >> M;
	
	
	for(int f = 0; f < N; f++){
		for(int c = 0; c < M; c++){
			
			
			cin >> Mat[f][c];
			O[Mat[f][c] - 1]++;
			
			if(mayor < Mat[f][c])
				mayor = Mat[f][c];
			
		}
	}
	
	
	for(int i = 0; i < mayor; i++)
		if(O[i] > 0)
		cout << O[i] << " ";
	
	return 0;
}

