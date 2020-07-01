#include <iostream>
using namespace std;

/*
    Recursividade - uma funcao que chama ela mesma N vazes
*/

void fib(int f, int a = 0, int b = 1, int c = 1);


int main() {
    system("@cls || clear"); 
    fib(20);

    return 0;
}

void fib(int f, int a, int b, int c) {
    cout << c << endl;
    a = b;
    b = c;
    c = a + b;
    if(c <= f) {
        fib(f, a, b, c);
    }
}