#include <iostream>
using namespace std;

#define FILAS 500
#define COLUMNAS 500

bool estaDentrodeMatriz(const int F, const int C,const int Factual, const int Cactual);
void avanzar(int & fActual, int & cActual, char mirada);
void girarDerecha(char & mirada);
void girarIzquierda(char & mirada);
void darVuelta(char & mirada);

int main(int argc, char *argv[]) {
	
	int Mat[FILAS][COLUMNAS];
	int N, M;
	
	cin >> N; //FILAS
	cin >> M; //COLUMNAS
	
	//Cargar Mapa
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			cin >> Mat[i][j]; 
			
	//0 derecho
	//1 gira a la derecha
	//2 gira a la izquierda
	//3 date vuelta
	
	//caminamos por la matriz;
	int Factual = 0, Cactual = 0;
	bool llego = false;
	char mirada = 'E';
	
	while(estaDentrodeMatriz(N,M,Factual,Cactual) and !llego){
		
		//preguntamos
		switch(Mat[Factual][Cactual])
		{
			case 1: girarDerecha(mirada); break;
			case 2: girarIzquierda(mirada); break;
			case 3: darVuelta(mirada); break;
		}
		
		//avanzamos
		avanzar(Factual,Cactual,mirada);
			
			
		if(Factual == N-1 and Cactual == M-1)
			llego = true;
		
	}
	
	
	if(llego)
				cout << "llegaste" << endl;
	else
				cout << "te perdiste" << endl;
	
	return 0;
}


void darVuelta(char & mirada){
	switch(mirada){
	case 'N': mirada = 'S'; break;
	case 'E': mirada = 'W'; break;
	case 'S': mirada = 'N'; break;
	case 'W': mirada = 'E'; break;
	}
}

void girarDerecha(char & mirada){
	switch(mirada){
	case 'N': mirada = 'E'; break;
	case 'E': mirada = 'S'; break;
	case 'S': mirada = 'W'; break;
	case 'W': mirada = 'N'; break;
	}
}

void girarIzquierda(char & mirada){
	switch(mirada){
	case 'N': mirada = 'W'; break;
	case 'E': mirada = 'N'; break;
	case 'S': mirada = 'E'; break;
	case 'W': mirada = 'S'; break;
	}
}

void avanzar(int & fActual, int & cActual, char mirada){
	switch(mirada){
	case 'E': cActual++; break;
	case 'N': fActual--; break;
	case 'S': fActual++; break;
	case 'W': cActual--; break;
	}
}

bool estaDentrodeMatriz(const int F, const int C,const int Factual, const int Cactual)
{
	return (Factual < F and Factual >= 0 and Cactual < C and Cactual >= 0);
}
