#include <iostream>
using namespace std;
#define TAM 100

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	
	int filas, columnas;
	
	cin >> filas >> columnas;
	
	int numero = 1;
	
	int fInicial=0, fFinal;
	int cInicial=0, cFinal;
	
	while(fInicial < fFinal && cInicial < cFinal)
	{
		
		int c , f;
		
		cFinal=columnas-1-cInicial;
		fFinal=filas-1-fInicial;
		
		for(c = cInicial; c < cFinal; c++){
			M[fInicial][c] = numero++;
		}
		
		for(f = fInicial; f < fFinal; f++){
			M[f][cFinal] = numero++;
		}
		
		for(c = cFinal; c > cInicial; c--){
			M[fFinal][c] = numero++;
		}
		
		for(f = fFinal; f > fInicial; f--){
			M[f][c] = numero++;
		}
		
		fInicial++;
		cInicial++;
		
	}
	
	
	for(int i = 0; i < filas; i++){
		for(int j = 0; j < columnas; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

