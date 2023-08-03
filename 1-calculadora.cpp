#include <iostream>
using namespace std;

int main(){
	int opc, cal, num_1, num_2;
	
	while(opc != 5){
		cout << "CALCULADORA" << "\n\n" 
		<< "1 - Soma" "\n" 
		<< "2 - subtração" "\n"
		<< "3 - multiplicação" "\n"
		<< "4 - Divisão" "\n"
		<< "5 - Sair" "\n\n"
		<< "Digite uma opção (1/2/3/4/5): ";
		cin >> opc;
	
	if(opc == 1){
		cout << "\n" "Você escolheu soma!" "\n"
	    	<< "Digite o primeiro número: ";
	    	cin >> num_1;
	    	cout << "Digite o segundo número: ";
	    	cin >> num_2;
	    	cal = num_1 + num_2;
	    	cout << "\n" "A soma entre o primeiro e segundo número é: "<< cal << "\n\n";
	}
    	else if(opc == 2){
    		cout << "\n" "Voce escolheu subtração!" "\n"
    		<< "Digite o primeiro número: ";
    		cin >> num_1;
    		cout << "Digite o segundo número: ";
    		cin >> num_2;
    		cal = num_1 - num_2;
    		cout << "\n" "O resultado da subtração é: "<< cal << "\n\n";
    	}
    	else if(opc == 3){
    		cout << "\n" "Você escolheu multiplicação!" "\n"
    		<< "Digite o primeiro número: ";
    		cin >> num_1;
    		cout << "Digite o segundo número: ";
    		cin >> num_2;
    		cal = num_1 * num_2;
    		cout << "\n" "O resultado da multiplicação é: "<< cal << "\n\n";
    	
    	}
    	else if(opc == 4){
    		cout << "\n" "Você escolheu Divisão!" "\n"
    		<< "Digite o primeiro número: ";
    		cin >> num_1;
    		cout << "Digite por quanto quer dividir: ";
    		cin >> num_2;
    		cal = num_1 / num_2;
    		cout << "\n" "O resultado da divisão é: "<< cal << "\n\n";
    	}
    	else if(opc == 5){
    		cout<< "Saindo!!";
    	}
    	else if(opc == 0 || opc >= 6){
    		cout << "Número incorreto! digite um número entre (1/2/3/4/5)!!" "\n\n";
    	}
	}
	    return 0;
	}
