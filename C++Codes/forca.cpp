#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    char palavra[30], letra[1], secreta[30];
    int tam, i, chances, acertos;
    bool acerto = false;

    chances = 6;
    tam = 0;
    i = 0;
    acerto = false;
    acertos = 0;

    cout << "Digite a palavra que secreta: ";
    cin >> palavra;
    system("@cls || clear");

    while(palavra[i] != '\0') {
        i++;
        tam++;
    }

    for(i = 0; i < 30; i++) {
        secreta[i] = '-';
    }

    while((chances > 0) && (acertos < tam)) {
        cout << "Chances restantes: " << chances << "\n\n";
        cout << "Palavra secreta: ";
        for(i = 0; i < tam; i++) {
            cout << secreta[i];
        }
        cout << "\n\nDigite uma letra: ";
        cin >> letra[0];
        for(i = 0; i < tam; i++) {
            if(palavra[i] == letra[0]) {
                acerto = true;
                secreta[i] = palavra[i];
                acertos++;
            }
        }
        if(!acerto) {
            chances--;
        }
        acerto = false;
        system("cls");
    }

    if(acertos == tam) {
        cout << "Voce venceu\n";
    } else {
        cout << "Que pena, Voce perdeu!!!\n";
    }

    system("pause");

    return 0;
}