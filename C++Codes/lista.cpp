#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;

int main(int argc, char *argv[]) {
	system("@cls || clear");

	list<int> aula;
	int tam;

	tam = 10;
	for (int i = 0; i < tam; i++) {
		aula.push_front(i);
	}

	cout << "Tamanho da lista: " << aula.size() << endl;

	tam = aula.size();
	for (int i = 0; i < tam; i++) {
		cout << aula.front() << endl;
		aula.pop_front();
	}


	return 0;
}
