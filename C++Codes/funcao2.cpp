#include <iostream>
#include <cstdlib>
using namespace std;

/* sobrecarga de funcoes 
    Obs: no programa pode ter duas funcoes com mesmo nome mas com 
    paranmetros diferentes */

void soma();
void soma(int n1, int n2);

int main(int argc, char *argv[]) {
    system("@cls || clear");

    soma(20, 30);
    soma();

    return 0;
}

void soma(int n1, int n2) {
    int re = n1 + n2;
    cout << "\nSoma de " << n1 << " com " << n2 << " = " << re << endl;
}

void soma() {
    int n1, n2, re;
    n1 = 10;
    n2 = 20;
    re = n1 + n2;

    cout << "Soma de " << n1 << " com " << n2 << " = " << re << endl;
}