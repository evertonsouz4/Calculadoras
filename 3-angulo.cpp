#include <iostream>
using namespace std;

int quadrado(int n) {
    return n * n;
}

int main() {
    int n1, n2, n3;
    cout << "\nDigite 3 numeros:\n";
    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 > 0 && n2 > 0 && n3 > 0 &&
        (quadrado(n1) + quadrado(n2) == quadrado(n3) ||
         quadrado(n2) + quadrado(n3) == quadrado(n1) ||
         quadrado(n3) + quadrado(n1) == quadrado(n2))) {
        cout << "\nOs numeros " << n1 << ", " << n2 << " e " << n3
             << " Podem formar um triangulo com angulo reto!!!\n";

    } else {
        cout << "\n"
             << n1 << ", " << n2 << " e " << n3
             << " Nao podem formar um triangulo com angulo reto!!!\n";
    }

    return 0;
}
