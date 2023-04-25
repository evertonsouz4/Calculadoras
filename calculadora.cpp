#include <iostream>
using namespace std;

int main(){
	int cal;
	
	cout << "CALCULADORA" << "\n\n" 
		<< "1 - Soma" "\n" 
		<< "2 - subtração" "\n"
		<< "3 - multiplicação" "\n"
		<< "4 - Divisão" "\n\n"
		<< "Digite uma opção (1/2/3/4): ";
		cin >> cal;
	
	if(cal == 1){
		int cal_soma;
		int soma_1;
		int soma_2;
		
		cout << "\n" "Você escolheu soma!" "\n"
		<< "Digite o primeiro número: ";
		cin >> soma_1;
		cout << "Digite o segundo número: ";
		cin >> soma_2;
		cal_soma = soma_1 + soma_2;
		cout << "\n" "A soma entre o primeiro e segundo número é: "<< cal_soma;
		
	}else if(cal == 2){
		int cal_sub;
		int sub_1;
		int sub_2;
		cout << "\n" "Voce escolheu subtração!" "\n"
		<< "Digite o primeiro número: ";
		cin >> sub_1;
		cout << "Digite o segundo número: ";
		cin >> sub_2;
		cal_sub = sub_1 - sub_2;
		cout << "\n" "O resultado da subtração é: "<< cal_sub;
		
	}else if(cal == 3){
		int cal_mult;
		int mult_1;
		int mult_2;
		cout << "\n" "Você escolheu multiplicação!" "\n"
		<< "Digite o primeiro número: ";
		cin >> mult_1;
		cout << "Digite o segundo número: ";
		cin >> mult_2;
		cal_mult = mult_1 * mult_2;
		cout << "\n" "O resultado da multiplicação é: "<< cal_mult;
	
	}else if(cal == 4){
		int cal_div;
		int cal_res;
		int div_1;
		int div_2;
		cout << "\n" "Você escolheu Divisão!" "\n"
		<< "Digite o primeiro número: ";
		cin >> div_1;
		cout << "Digite por quanto quer dividir: ";
		cin >> div_2;
		cal_div = div_1 / div_2;
		cal_res = div_1 % div_2;
		cout << "\n" "O resultado da divisão é: "<< cal_div;
		cout << "\n" "O resto é: " << cal_res;
		
	}else{
		cout << "Número incorreto! digite um número entre (1/2/3/4)";
	}
	
	return 0;
	}
