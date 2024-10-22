#include <iostream>
using namespace std;
#define TAM 3

void cargarM(int M[][TAM]);
bool diagIguales(const int M[][TAM]);

int main(int argc, char *argv[]) {
	int M[TAM][TAM];

	cargarM(M);
	
	
	if(diagIguales(M))
		cout << "Tesoro encontrado" << endl;
	else
		cout << "Sigue buscando" << endl;
	
	return 0;
}


bool diagIguales(const int M[][TAM]){
	
	return (M[0][0] == M[0][TAM-1] and M[1][1] == M[1][TAM-2] and M[2][2] == M[2][TAM-2]);
	
}

void cargarM(int M[][TAM]){
	for(int i = 0; i < TAM; i++)
		for(int j = 0; j < TAM; j++)
		cin >> M[i][j];
}
