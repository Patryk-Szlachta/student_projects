#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> numbers;

	numbers.push_back(7);
	numbers.push_back(3);
	numbers.push_back(10);
	numbers.push_back(1);

	for(int i = 0; i < numbers.size() - 1; i++){
	for (int j = 0; j < numbers.size() - 1; j++) {
		if (numbers[j] > numbers[j+1]){
			int zmienna = numbers[j];
			numbers[j] = numbers[j+1];
			numbers[j+1] = zmienna;
			}
		}
	}
for(int i = 0; i < numbers.size(); i++){
cout << numbers[i] << " ";
}
	return 0;
}
