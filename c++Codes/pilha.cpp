#include <iostream>
#include <stack>
using namespace std;

int main() {
    system("@cls || clear"); 

    stack <string> cartas;

    cartas.push("Rei De Copas");
    cartas.push("Rei De Espadas");
    cartas.push("Rei De Ouros");
    cartas.push("Rei de Paus");

    cout << "Tamanho da pilha " << cartas.size() << endl;
    cout << "Carta do topo: " << cartas.top() << endl;

    //cartas.pop();

    //cout << "Tamanho da pilha " << cartas.size() << endl;

    return 0;
}