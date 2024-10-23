#include <iostream>
using namespace std;


/*
https://omegaup.com/arena/problem/Cortando-el-Cesped-/
*/

#define TAM 10

void incrementoMatriz(int M[][TAM]);
void cortarFila(int M[][TAM], const int fila);
void cortarColumna(int M[][TAM], const int columna);

int main(int argc, char *argv[]) {
		int M[TAM][TAM] = {0};
		int k;
		
		cin >> k;
		incrementoMatriz(M);//incremento todo en 1
	
		
		int i = 0;
		while(i < k){
			
			incrementoMatriz(M);//incremento todo en 1
			
			int fila;
			for(int f = 0; f < 3; f++){//corto 3 filas
				cin >> fila;
				cortarFila(M,fila);
			}
			
			
			int columna;
			for(int c = 0; c < 3; c++){//corto 3 columnas
				cin >> columna;
				cortarColumna(M,columna);
			}
			
			i++;
		}
		
		
		for(int i = 0; i < TAM; i++){
			for(int j = 0; j < TAM; j++){
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
		
		
	return 0;
}

void cortarColumna(int M[][TAM], const int columna){
	
	for(int f = 0; f < TAM; f++)
		if(M[f][columna - 1] > 1)
			M[f][columna - 1] = 1;
	
}

void cortarFila(int M[][TAM], const int fila){
	
	for(int c = 0; c < TAM; c++)
		if(M[fila-1][c] > 1)
			M[fila-1][c] = 1;
	
}

void incrementoMatriz(int M[][TAM]){
	for(int i = 0; i < TAM; i++)
		for(int j = 0; j < TAM; j++)
			M[i][j]++;
}
