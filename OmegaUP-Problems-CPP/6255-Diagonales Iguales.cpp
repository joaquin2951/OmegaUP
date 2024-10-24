#include <iostream>
using namespace std;
#define TAM 100

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	int N;
	bool iguales = true;
	
	cin >> N;
	

	
	for(int f = 0; f < N; f++)
		for(int c = 0; c < N; c++)
			cin >> M[f][c];
		
	
	int f = 0;
	
	while(iguales && f < N)
		if(M[f][f] != M[f][N - 1 - f])
			iguales = false;
		else
			f++;
	
	
	
	if(iguales)
		cout << "Iguales" << endl;
	else
		cout << "No Iguales" << endl;
	
	
	
	return 0;
}

