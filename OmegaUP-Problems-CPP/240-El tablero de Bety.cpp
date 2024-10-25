#include <iostream>
#include <vector>
using namespace std;
#define TAM 99

void Up(short M[][TAM], const short f, const short c);
void Down(short M[][TAM], const short f, const short c);
void Left(short M[][TAM], const short f, const short c);
void Right(short M[][TAM], const short f, const short c);
void intercambiarFilas(short M1[],short M2[], const short cc);
void leerOperaciones(vector<short> & V, const unsigned & casos);
void cargarM(short M[][TAM], const short cf, const short cc);
void mostrarM(const short M[][TAM], const short cf, const short cc);


int main(int argc, char *argv[]) {
	

	short M[TAM][TAM];
	vector<short> V;
	
	short cf,cc;
	unsigned casos;
	
	cin >> cf >> cc >> casos;//filas, columnas, casos
	
	
	//leemos todas las operaciones a realizar
	leerOperaciones(V,casos);
		
	
	//Cargamos la matriz
	cargarM(M,cf,cc);
		
		
		//hacemos las operaciones
		for(short elemento : V)
		{
			
			switch(elemento)
			{
			case 1: Up(M,cf,cc); break;
			case 2: Down(M,cf,cc); break;
			case 3: Left(M,cf,cc); break;
			case 4: Right(M,cf,cc); break;
			}
			
		}
		
		
		//mostramos la matriz
		mostrarM(M,cf,cc);
		
		
		return 0;
}


void mostrarM(const short M[][TAM], const short cf, const short cc)
{
	for(short i = 0; i < cf; i++){
		for(short j = 0; j < cc; j++){
			cout << M[i][j] << " ";
		}
		cout << endl;
	}
}

void cargarM(short M[][TAM], const short cf, const short cc)
{
	for(short f = 0 ; f < cf; f++){
		for(short c = 0; c < cc; c++)
			cin >> M[f][c];
	}
}

void leerOperaciones(vector<short> & V, const unsigned & casos)
{
	for(unsigned i = 0; i < casos; i++)
	{
		short X;
		cin >> X;
		V.push_back(X);//las agregamos al vector
	}
}

void intercambiarFilas(short M1[],short M2[], const short cc){
	
	for(int i = 0; i < cc; i++)
		swap(M1[i],M2[i]);
	
}
	
	
	void Right(short M[][TAM], const short f, const short c)
	{
		//pone la ultima col antes de la primera
		for(short columna = c - 2; columna >= 0; columna--)
		{
			
			for(short fila = 0; fila < f; fila++)
			{
				swap(M[fila][columna],M[fila][columna+1]);
			}
			
		}
		
	}
	
	void Left(short M[][TAM], const short f, const short c)
	{
		//pone la primera col despues de la ultima
		for(short columna = 1; columna < c; columna++)
		{
			
			for(short fila = 0; fila < f; fila++)
			{
				swap(M[fila][columna],M[fila][columna-1]);
			}
			
		}
		
	}
	
	void Down(short M[][TAM], const short f, const short c)
	{
		//toma primera fila y la pone abajo de la ultima
		for(short fila = f - 2; fila >= 0; fila--)
		{
			intercambiarFilas(M[fila],M[fila+1], c);
		}
		
	}
	
	
	void Up(short M[][TAM], const short f, const short c)
	{
		//toma primera fila y la pone abajo de la ultima
		for(short fila = 1; fila < f; fila++)
		{
			intercambiarFilas(M[fila],M[fila-1], c);
		}
		
	}
	
