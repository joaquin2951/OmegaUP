#include <iostream>
using namespace std;
#define TAM 6

bool esCuadrada(const int X, const int Y);
bool sePuedenCalcularSyR(const int Ax, const int Ay, const int Bx, const int By);
bool sePuedenMultiplciar(const int Ax, const int Ay, const int Bx, const int By);
void cargarMatriz(int M[][TAM], const int f, const int c);
void suma(const int Ma[][TAM], const int Mb[][TAM], const int F, const int C);
void resta(const int Ma[][TAM], const int Mb[][TAM], const int F, const int C);
void transpuesta(const int M[][TAM],  int F,  int C);
void multiplicar(int A[][TAM],const int Ax,const int Ay,int B[][TAM],const int Bx,const int By);

int main(int argc, char *argv[]) {
	
	int A[TAM][TAM], B[TAM][TAM];
	int Ax,Ay,Bx,By;
	string operacion;
	int casos = 0;
	//calcular suma | resta | transpuesta
	// SUMA | RESTA | MULTIPLICACION | TRANSPUESTA | SALIR
	// IMPRIME X si NO se puede hacer la operacion solicitada
	
	cin >> Ax >> Ay;
	cargarMatriz(A,Ax,Ay);
	
	cin >> Bx >> By;
	cargarMatriz(B,Bx,By);
	
	
	while(operacion != "SALIR" && casos < 4){
		
		cin >> operacion;
		
		if(operacion == "TRASPUESTA" || operacion == "RESTA" || operacion == "SUMA" || operacion == "MULTIPLICACION")
			switch(operacion[0]){
			
			case 'T':  transpuesta(A,Ax,Ay); break;
			case 'R': if(sePuedenCalcularSyR(Ax,Ay,Bx,By)) resta(A,B,Ax,Ay); else cout << 'X' << endl; break;
			case 'S': if(sePuedenCalcularSyR(Ax,Ay,Bx,By)) suma(A,B,Ax,Ay); else cout << 'X' << endl; break;
			case 'M': if(sePuedenMultiplciar(Ax,Ay,Bx,By)) multiplicar(A,Ax,Ay,B,Bx,By); else cout << 'X' << endl; break;
		
			}
		
		
			casos++;
	}
	
	
	return 0;
}



void multiplicar(int A[][TAM],const int Ax,const int Ay,int B[][TAM],const int Bx,const int By){
	
	int R[TAM][TAM];
	int f = Ax;
	int c = By;

	
	// Inicializamos la matriz resultado con ceros
	for (int i = 0; i < f; i++) {
		for (int j = 0; j < c; j++) {
			R[i][j] = 0;
		}
	}
	
	// Realizamos la multiplicación
	for (int i = 0; i < f; i++) 
		for (int j = 0; j < c; j++) 
			for (int k = 0; k < Ay; k++) 
				R[i][j] += A[i][k] * B[k][j];
			
		
	
	
	
	
	for(int i = 0; i < f; i++){
		for(int j = 0; j < c; j++){
			cout << R[i][j] << " ";
		}
		cout << endl;
	}
	
	
	
	
}

void transpuesta(const int M[][TAM],  int F, int C){
	int M2[TAM][TAM];
	
	if(F == C){
		//COPIO LA MATRIZ
		for(int f = 0; f < F; f++)
			for(int c = 0; c < f; c++)
				M2[f][c] = M[f][c];
				

	
		// LA TRANSPONGO
		for(int f = 0; f < F; f++)
			for(int c = 0; c < f; c++)
				M2[c][f] = M2[f][c];
			
			
		//LA IMPRIMO
		for(int i = 0; i < F; i++){
			for(int j = 0; j < C; j++)
						cout << M2[i][j] << " ";
					cout << endl;
			}	
		}else{
		
		
		for(int c = 0; c < C; c++){
			
			for(int f = 0; f < F; f++){
				
				cout << M[f][c] <<  " ";
				
			}
			
			cout << endl;
			
		}
		
	}
	
}


void resta(const int Ma[][TAM], const int Mb[][TAM], const int F, const int C){
	for(int i = 0; i < F; i++){
		for(int j = 0; j < C; j++){
			cout << Ma[i][j] - Mb[i][j] << " ";
		}
		cout << endl;
	}
}

void suma(const int Ma[][TAM], const int Mb[][TAM], const int F, const int C){
	for(int i = 0; i < F; i++){
		for(int j = 0; j < C; j++){
			cout << Ma[i][j] + Mb[i][j] << " ";
		}
		cout << endl;
	}
}

void cargarMatriz(int M[][TAM], const int f, const int c){
	for(int i = 0; i < f; i++)
		for(int j = 0; j < c; j++)
		cin >> M[i][j];
}

bool sePuedenMultiplciar(const int Ax, const int Ay, const int Bx, const int By){
	return Ay == Bx;
}

bool sePuedenCalcularSyR(const int Ax, const int Ay, const int Bx, const int By){
	return (Ax == Bx and Ay == By);
}

bool esCuadrada(const int X, const int Y){
	return X == Y;
}
