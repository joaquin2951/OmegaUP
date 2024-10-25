#include <iostream>
using namespace std;
#define TAM 99

void Up(unsigned M[][TAM], const int f, const int c);
void Down(unsigned M[][TAM], const int f, const int c);
void Left(unsigned M[][TAM], const int f, const int c);
void Right(unsigned M[][TAM], const int f, const int c);
void intercambiarFilas(unsigned M1[],unsigned M2[], const int cc);

int main(int argc, char *argv[]) {
	
	//nos piden, ingresar 3 variables
	//cargar una matriz entera
	//hacer 4 funciones:
	// * una para intercambiar primera fila con ultima
	// * una para intercambiar ultima F con primera
	// * una para intercambiar primra C con ultima
	// * una para intercambiar ultima C con primera
	// k veces (var casos)
	
	unsigned M[TAM][TAM];
	int cf,cc, casos;
	
	cin >> cf >> cc >> casos;
	
	for(int f = 0 ; f < cf; f++)
		for(int c = 0; c < cc; c++)
			cin >> M[f][c];
		
		
		
		for(int i = 0; i < casos; i++)
		{
			
			int opcion; //1 "up", 2 "down", 3 "left" y 4 "right"
			
			cin >> opcion;
			
			switch(opcion)
			{
			case 1: Up(M,cf,cc); break;
			case 2: Down(M,cf,cc); break;
			case 3: Left(M,cf,cc); break;
			case 4: Right(M,cf,cc); break;
			}
			
		}
		
		
		for(int i = 0; i < cf; i++){
			for(int j = 0; j < cc; j++){
				cout << M[i][j] << " ";
			}
			cout << endl;
		}
		
		
		return 0;
}


void intercambiarFilas(unsigned M1[],unsigned M2[], const int cc){
	
	for(int i = 0; i < cc; i++)
		swap(M1[i],M2[i]);
	
}
	
	
	void Right(unsigned M[][TAM], const int f, const int c)
	{
		//pone la ultima col antes de la primera
		for(int columna = c - 2; columna >= 0; columna--)
		{
			
			for(int fila = 0; fila < f; fila++)
			{
				swap(M[fila][columna],M[fila][columna+1]);
			}
			
		}
		
	}
	
	void Left(unsigned M[][TAM], const int f, const int c)
	{
		//pone la primera col despues de la ultima
		for(int columna = 1; columna < c; columna++)
		{
			
			for(int fila = 0; fila < f; fila++)
			{
				swap(M[fila][columna],M[fila][columna-1]);
			}

		}
		
	}
	
	void Down(unsigned M[][TAM], const int f, const int c)
	{
		//toma primera fila y la pone abajo de la ultima
		for(int fila = f - 2; fila >= 0; fila--)
		{
			intercambiarFilas(M[fila],M[fila+1], c);
		}
		
	}
	
	
	void Up(unsigned M[][TAM], const int f, const int c)
	{
		//toma primera fila y la pone abajo de la ultima
		for(int fila = 1; fila < f; fila++)
		{
			intercambiarFilas(M[fila],M[fila-1], c);
		}
		
	}
