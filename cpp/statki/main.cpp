#include <iostream>

using namespace std;

int main(){
	int g[3][3] = { {0,0,0}, {0,0,0}, {0,0,0} };
	int x, y;

	cout << "Wybierz miejsce na statek(wpisz -1 -1 aby zakończyć)"<< endl;
	while(true){
	cout << "wpisz x";
	cin >> x;
	cout << "wpisz y";
	cin >> y;
	if(x==-1 && y==-1)break;
	g[x][y]=1;
	}

	cout << "Wybierz miejsce do strzału" << endl;
	cout << "wpisz x";
	cin >> x;
	cout << "wpisz y";
	cin >> y;


	if(g[x][y]==1){
		cout << "Trafiony" <<endl;

	}else{
		cout << "Pudło" <<endl;

	}
return 0;
}
