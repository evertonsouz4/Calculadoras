#include <iostream>
using namespace std;

int fatorial(int num);

int main(int argc, char *argv[]) {
    int numero;
    cout << "\n--------------\n"
         << "## FATORIAL ##\n"
         << "--------------\n";
    cout << "Digite um numero: ";
    cin >> numero;
    cout << "A fatorial de " << numero << "! = " << fatorial(numero);
    return 0;
}

int fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}
