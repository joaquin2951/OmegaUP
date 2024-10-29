#include <iostream>
using namespace std;
#define TAM 40
bool impares(const int v1, const int v2, const int v3, const int v4);
void ultCol_primCol(int M[][TAM], short fc);
void primFil_ultFil(int M[][TAM], short fc);

int main(int argc, char *argv[]) {
	
	int M[TAM][TAM];
	short k;
	int SINPAR = 0;
	
	cin >> k;
	
	for(short i = 0; i < k; i++)
		for(short j = 0; j < k; j++)
			cin >> M[i][j];
	
	
	for(short fc = 0; fc < k; fc++)
		if(impares(M[fc][fc],M[fc][fc+1],M[fc+1][fc],M[fc+1][fc+1]))
				SINPAR++;
	
	if(SINPAR % 2 != 0)
		ultCol_primCol(M,k);
	else
		primFil_ultFil(M,k);
	
	
	for(short fil = 0; fil < k; fil++){
		for(short col = 0; col < k; col++){
			cout << M[fil][col] << " ";
		}
		cout << endl;
	}
	
	return 0;
}

void ultCol_primCol(int M[][TAM], short fc)
{
	for(short i = 0; i < fc; i++)
		swap(M[i][0],M[i][fc-1]);
}

void primFil_ultFil(int M[][TAM], short fc)
{
	for(short i = 0; i < fc; i++)
		swap(M[0][i],M[fc-1][i]);
}

bool impares(const int v1, const int v2, const int v3, const int v4)
{
	return (v1 % 2 != 0 and v2 % 2 != 0 and v3 % 2 != 0 and v4 % 2 != 0);
}
