#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	int tablilla[3], cofre[3];
	
	
	for(int i = 0; i < 3; i++)
		cin >> tablilla[i];
	
	for(int i = 0; i < 3; i++)
		cin >> cofre[i];
	
	
	bool cabe = true;
	int tl_tablilla = 0;
	
	while(cabe && tl_tablilla < 3)
	{
		int tl_cofre = 0;
		bool mayorAtodos = true;
		
		while(cabe && tl_cofre < 3)
		{
			if(tablilla[tl_tablilla] <= cofre[tl_cofre])
				mayorAtodos = false;
			
				tl_cofre++;
		}
		
		if(mayorAtodos)
					cabe = false;
		else
		tl_tablilla++;
	}
	
	if(cabe)
				cout << 1 << endl;
	else
			cout << 0 << endl;
	
	
	return 0;
}

