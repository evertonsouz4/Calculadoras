#include <iostream>
using namespace std;

int main() {
    int opc, cal, num_1, num_2;

    while (opc != 5) {
        cout << "\n## CALCULADORA ##\n"
             << "-----------------\n"
             << "1 - Soma\n"
             << "2 - subtracao\n"
             << "3 - multiplicacao\n"
             << "4 - Divisao\n"
             << "5 - Sair\n"
             << "-----------------\n"
             << "Digite uma opcao (1 /2 /3 /4 /5): ";
        cin >> opc;

        if (opc == 1) {
            cout << "\nVoce escolheu soma!\nDigite o primeiro numero: ";
            cin >> num_1;
            cout << "Digite o segundo numero: ";
            cin >> num_2;
            cal = num_1 + num_2;
            cout << "\nA soma entre o primeiro e segundo numero e: " << cal << "\n\n";

        } else if (opc == 2) {
            cout << "\nVoce escolheu subtracao!\nDigite o primeiro numero: ";
            cin >> num_1;
            cout << "Digite o segundo numero: ";
            cin >> num_2;
            cal = num_1 - num_2;
            cout << "\nO resultado da subtracao e: " << cal << "\n\n";

        } else if (opc == 3) {
            cout << "\nVoce escolheu multiplicacao!\nDigite o primeiro numero: ";
            cin >> num_1;
            cout << "Digite o segundo numero: ";
            cin >> num_2;
            cal = num_1 * num_2;
            cout << "\nO resultado da multiplicacao e: " << cal << "\n\n";

        } else if (opc == 4) {
            cout << "\nVoce escolheu Divisao!\nDigite o primeiro numero: ";
            cin >> num_1;
            cout << "Digite por quanto quer dividir: ";
            cin >> num_2;
            cal = num_1 / num_2;
            cout << "\nO resultado da divisao e: " << cal << "\n\n";

        } else if (opc == 5) {
            cout << "Saindo!!";

        } else if (opc == 0 || opc >= 6) {
            cout << "Numero incorreto! digite um numero entre (1/2/3/4/5)!!\n\n";
        }
    }
    return 0;
}
