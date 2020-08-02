#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]) {
    system("@cls || clear");


    if(argc > 1) {
        if(!strcmp(argv[1], "sol")) {
            cout << "Vou ao club" << endl;
        } else if(!strcmp(argv[1], "nublado")) {
            cout << "Vou ao cinema" << endl;
        } else {
            cout << "Vou ficar em casa";
        }
    }

    system("pause");

    return 0;
}