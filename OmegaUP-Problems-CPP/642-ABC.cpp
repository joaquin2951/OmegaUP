#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	
	vector<short> V;
	short valor;
	string abc;
	
	for(int i = 0; i < 3; i++)
	{
		
		cin >> valor;
		V.push_back(valor);
		
	}
	
	sort(V.begin(),V.end());
	
	cin >> abc;
	

	cout << V[abc[0] - 'A'] << " " << V[abc[1] - 'A'] << " " << V[abc[2] - 'A'];
	
	return 0;
}

