#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

	int N, X = 0, Y = 0, soma;

	cin >> N;

	int loop = 0;
	while(loop < N) {
	
		cin >> X >> Y;
		if((X && Y) % 2 != 0) {
			soma = X + Y;	
			cout << soma << "\n";
		} else {
			soma = 0;	
			cout << soma << "\n";
		}
		loop++;	
	}

	return 0;
}
