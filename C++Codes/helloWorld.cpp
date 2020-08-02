#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	system("@cls || clear");


	cout << "Hello, World!\n" << endl;

		if(argc > 1) {
			for(int i = 1; i < argc; i++) {
				cout << argv[i];
			}
		} else {
			cout << "Nao foram passados argumentos\n";
		}

	/*
		cout << "argc: " << argc << endl;
		cout << "argv[]: " << argv[0] << endl;
	*/

	return 0;
}
