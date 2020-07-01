#include <iostream>
#include <cstdlib>
using namespace std;

void imp(string txt = "Lima");

int main(int argc, char *argv[]) {
    system("@cls || clear");

    imp("Ola mundo");

    return 0;
}


void imp(string txt) {
    cout << endl << txt << endl;
}