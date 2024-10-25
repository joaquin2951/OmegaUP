#include <iostream>
using namespace std;

#define TAM 500

int main(int argc, char *argv[]) {
	
	int a[TAM][TAM] = {0};
	int N;
	
	cin >> N;
	
	int num;

	
	for(int k = 0; k < 2; k++)
	for(int i = 0; i < N; i++){
		
		for(int j = 0; j < N; j++){
			
				cin >> num;
				
				a[i][j]+=num;
				
			
		}
		
	}
	
	
	for(int i = 0; i < N; i++){
		
		for(int j = 0; j < N; j++){
			
			cout << a[i][j] << " ";
			
			
		}
		
		cout << endl;
		
	}
	
	
	return 0;
}

