#include <iostream>
using namespace std;

#define TAM 100

void cargarM(int M[][TAM], const int f, const int c);

int main() {

	int fila, columna;
	int M[TAM][TAM];

	cin >> fila >> columna;
	
	cargarM(M,fila,columna);
	
	bool iguales = true;
	int f = 0, c;
	
	while(f < fila && iguales)
	{
		
		c = 0;
		
		while(c < columna / 2 && iguales)
		{
			
			if(M[f][c] != M[f][columna - 1 - c])
				iguales = false;
			else
				c++;
				
		}
		
		f++;
	}
	
	if(iguales)
				cout << "1\n";
	else
				cout << "0\n";
	
	
	return 0;
}

void cargarM(int M[][TAM], const int f, const int c){
	for(int i  = 0; i < f; i++)
		for(int j = 0; j < c; j++)
			cin >> M[i][j];
}
