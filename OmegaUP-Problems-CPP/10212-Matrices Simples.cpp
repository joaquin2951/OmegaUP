#include <iostream>
using namespace std;

#define TAM 1000

void cargarM(int M[][TAM], const int f, const int c);
int menorCol(const int M[][TAM], const int f, const int c);

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	int n,m;
	
	cin >> n >> m;
	
	cargarM(M,n,m);
	
	int c = 0;//recorro las columnas
	while(c < m)
	{
		
		cout << menorCol(M,n,c) << " ";
		c++;
	}
	
	
	
	return 0;
}

void cargarM(int M[][TAM], const int f, const int c){
	for(int i = 0; i < f; i++)
		for(int j = 0; j < c; j++)
		cin >> M[i][j];
}
	
int menorCol(const int M[][TAM], const int f, const int c){
		int menor = M[0][c];
		
		for(int F = 1; F < f; F++)
			if(menor > M[F][c])
				menor = M[F][c];
				
				return menor;
}
