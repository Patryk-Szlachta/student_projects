#include <iostream>


using namespace std;

int main(){
	int tab[]= {3, 2, 5, 4};
	int y = 4;
	for (int x = 0; x < y - 1; x++){
		for(int z = 0; z < y - 1; z++){
		if (tab[z] > tab[z+1]){
		int zmienna = tab[z];
		tab[z] = tab[z+1];
		tab[z+1] = zmienna;
		}
	}
}
	for (int x = 0; x < y; x++){
		cout << tab[x] << " ";
	}
	return 0;
}
