#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
	string palabra;
	int coincidencias = 0;
	int longitudPalabra;
	
	cin >> palabra;
	longitudPalabra = palabra.length();
	
	
	for(int i = 0; i < longitudPalabra; i++)
	{
		if(palabra[i] == palabra[longitudPalabra - 1 - i] || palabra[i] == toupper(palabra[longitudPalabra - 1 - i])
			 || palabra[i] == tolower(palabra[longitudPalabra - 1 - i]))
		{
			coincidencias++;
		}
	}
	
		cout << coincidencias << endl;
	
	
	return 0;
}

