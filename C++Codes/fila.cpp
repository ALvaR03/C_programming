#include <iostream>
#include <queue>
using namespace std;

void mostrar(queue <int> f) {

	while(!f.empty()){
		cout << f.front() << " ";	
		f.pop();
	}

}

int main () {

	queue<int> fila;
	fila.push(10);
	fila.push(20);
	fila.push(30);

/*
	fila.pop();
	fila.pop();
	*/

	mostrar(fila);

		cout << "Tamanho: " << fila.size() << endl;
		cout << "Elemento Frente: " << fila.front() << endl;
		cout << "Elemento Atras: " << fila.back() << endl;

	return 0;
}
