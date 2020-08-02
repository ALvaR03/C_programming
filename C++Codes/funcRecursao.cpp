#include <iostream>
#include <cstdlib>
using namespace std;

void contador(int num, int cont = 0);

int main(int argc, char *argv[]) {
    system("@cls || clear");

    contador(30);

    return 0;
}

void contador(int num, int cont) {
        cout << cont << endl;

    if(num > cont) {
        contador(num, ++cont);
    }
}