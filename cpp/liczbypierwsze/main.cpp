#include <iostream>
#include <cmath>

using namespace std;

int main(){
for(int x=2; x<100; x++){
int y=0;
	for(int z=1; z<sqrt(x); z++){
		if(x%z==0){
		y++;
		}
	}
if(y==1){
	cout<<x<<endl;
	}
}
return 0;
}
