#include <iostream>
using namespace std;
#define FC 20

int main(int argc, char *argv[]) {
	int Buscaminas[FC][FC] = {0};
	int M,N;
	
	cin >> M >> N;
	
	int valor;

	for(int i = 0; i < M; i++)//recorro filas
	{
		for(int j = 0; j < N; j++)//recorro columnas
		{
				cin >> valor;
				
				if(valor == 1){
					
					Buscaminas[i][j] = 9;
					Buscaminas[i][j+1]++; Buscaminas[i][j-1]++;
					Buscaminas[i+1][j]++;Buscaminas[i-1][j]++;
					Buscaminas[i+1][j+1]++; Buscaminas[i-1][j+1]++;
					Buscaminas[i+1][j-1]++; Buscaminas[i-1][j-1]++;
					
				}
				
				
		}
	}
	
	for(int i = 0; i < M; i++)//recorro filas
	{
		for(int j = 0; j < N; j++)//recorro columnas
		{
			
			if(Buscaminas[i][j] >= 9)
				cout << 9 << " ";
			else
				cout << Buscaminas[i][j] << " ";
			
			
		}
		
		cout << endl;
	}
	
	return 0;
}

