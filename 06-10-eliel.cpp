#include <iostream>
using namespace std;

int main() {
    char nome[50];
    int idade = 1;

    while (idade != 0) {
        cout << "Digite a idade (0 para sair): ";
        cin >> idade;

        if (idade != 0) {
            cout << "Digite o nome: ";
            cin >> nome;

            cout << nome << " tem " << idade << " anos.\n";

            if (idade >= 18) {
                cout << "Maior de idade.\n";
            } else {
                cout << "Menor de idade.\n";
            }
        }
    }

    return 0;
}
