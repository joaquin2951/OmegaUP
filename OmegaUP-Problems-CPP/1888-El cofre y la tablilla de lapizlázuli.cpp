#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]) {
	
	vector<int> tablilla;
	vector<int> caja;
	int valor;
	
	for(int i = 0; i < 3; i++)
	{
		
		cin >> valor;
		tablilla.push_back(valor);
		
	}

	for(int i = 0; i < 3; i++)
	{
		
		cin >> valor;
		caja.push_back(valor);
		
	}
	
	sort(tablilla.begin(),tablilla.end());
	sort(caja.begin(),caja.end());
	
	bool cabe = true;
	int i = 0;
	
	while(cabe && i < 3)
	{
		if(tablilla[i] > caja[i])
		{
			cabe = false;
		}
		else
			i++;
	}
	
	if(cabe)
					cout << 1 << endl;
	else
					cout << 0 << endl;
	
	return 0;
}

