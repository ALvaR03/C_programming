#include <iostream>
#include <cstdlib>
using namespace std;

void texto();
void soma(int n1, int n2);
int soma2(int n1, int n2);
void tr(string tra[4]);

int main(int argc, char *argv[]) {
    system("@cls || clear");

    int res;
    string tranps[4] = {"carro", "moto", "barco", "aviao"} ;

    soma(21, 25);
    res = soma2(11, 12);

    cout << "O valor da variavel res: " << res << endl;

    tr(tranps);

    return 0;
}

void texto() {
    cout << "Nao tem como" << endl;
}

void soma(int n1, int n2) {
    cout << "Soma dos valores: " << n1 + n2 << endl;
}

int soma2(int n1, int n2) {
    return n1 + n2;
}

void tr(string tra[4]) {
    for(int x = 0; x < 4; x++) {
        cout << tra[x] << endl;
    }
}