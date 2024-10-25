#include <iostream>
using namespace std;

#define TAM 100

int main(int argc, char *argv[]) {
	
	int mat[TAM][TAM];
	int M,N,f,c;
	bool iguales = true;
	
	cin >> M >> N;
	
	for(int i = 0; i < M; i++)
		for(int j = 0; j < N; j++)
			cin >> mat[i][j];
	
	
			
	c = 0;
	
	while(iguales && c < (N / 2) ){
		
		f = 0;

	//	cout << "c: " << c << endl;
	//	cout << "N-1-c: " << N-1-c << endl;
		
		while(iguales && f < M){
			
		//	cout << "f:" << f << endl;
			
			
			if(mat[f][c] != mat[f][N-1-c])
				iguales = false;
			else
				f++;
		
		}
		c++;
	}
	
	if(iguales)
				cout << '1';
	else
				cout << '0';
	
			
	return 0;
}

