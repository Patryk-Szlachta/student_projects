#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> numbers;

cout<< "Ile liczb?" << '\n';

int k=0;

cin>>k;

for(int m=0; m<=k-1; m++){
	cout << "Podaj liczbe" << '\n';
	int n=0;
	cin>>n;
	numbers.push_back(n);
	}

cout <<"Posortowane liczby:"<<'\n';

for(int x=0; x< numbers.size()-1; x++){
	for(int y=0; y<numbers.size()-1; y++){
	if(numbers[y]>numbers[y+1];
	swap(numbers[y], numbers[y+1]);
	}
	}
}
for(int v=0;v<numbers.size();v++){
cout<<numbers[v]<<'\n';
}
	return 0;
}
