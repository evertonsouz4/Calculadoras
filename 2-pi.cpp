#include <math.h>

#include <iostream>

using namespace std;
const float PI = 3.1415;

int main() {
    float r;
    float perimetro;
    float area;
    int opc = 0;

    while (opc != 3) {
        cout << "\n## CALCULADORA DE CIRCULO ##\n"
             << "----------------------------\n"
             << "1 - Perimetro\n"
             << "2 - Area\n"
             << "3 - Sair\n"
             << "----------------------------\n"
             << "Digite uma opcao (1 / 2 / 3): ";
        cin >> opc;

        if (opc == 1) {
            cout << "\nDigite o raio do circulo: ";
            cin >> r;
            perimetro = 2 * PI * r;
            cout << "O perimetro e: " << perimetro << "\n\n";

        } else if (opc == 2) {
            cout << "\nDigite o raio do circulo: ";
            cin >> r;
            area = PI * pow(r, 2);
            cout << "A area e: " << area << "\n\n";

        } else if (opc == 3) {
            cout << "Saindo!!";

        } else if (opc == 0 || opc >= 4) {
            cout << "ERRO!! Opcao invalida, Digite Novamente!!!"
                 << "\n\n";
        }
    }

    return 0;
}
