#include <iostream>
using namespace std;

int main(){
	int cal;
	
	cout << "CALCULADORA" << "\n\n" 
		<< "1 - Soma" "\n" 
		<< "2 - Subtracao" "\n"
		<< "3 - Multiplicacao" "\n"
		<< "4 - Divisao" "\n\n"
		<< "Digite uma opcao (1/2/3/4): ";
		cin >> cal;
	
	if(cal == 1){
		int cal_soma;
		int soma_1;
		int soma_2;
		
		cout << "\n" "Voce escolheu soma!" "\n"
		<< "Digite o primeiro numero: ";
		cin >> soma_1;
		cout << "Digite o segundo numero: ";
		cin >> soma_2;
		cal_soma = soma_1 + soma_2;
		cout << "\n" "A soma entre o primeiro e segundo numero e: "<< cal_soma;
		
	}else if(cal == 2){
		int cal_sub;
		int sub_1;
		int sub_2;
		cout << "\n" "Voce escolheu subtracao!" "\n"
		<< "Digite o primeiro numero: ";
		cin >> sub_1;
		cout << "Digite o segundo numero: ";
		cin >> sub_2;
		cal_sub = sub_1 - sub_2;
		cout << "\n" "O resultado da subtracao e: "<< cal_sub;
		
	}else if(cal == 3){
		int cal_mult;
		int mult_1;
		int mult_2;
		cout << "\n" "Voce escolheu multiplicacao!" "\n"
		<< "Digite o primeiro numero: ";
		cin >> mult_1;
		cout << "Digite o segundo numero: ";
		cin >> mult_2;
		cal_mult = mult_1 * mult_2;
		cout << "\n" "O resultado da multiplicacao e: "<< cal_mult;
	
	}else if(cal == 4){
		int cal_div;
		int cal_res;
		int div_1;
		int div_2;
		cout << "\n" "Voce escolheu Divisao!" "\n"
		<< "Digite o primeiro numero: ";
		cin >> div_1;
		cout << "Digite por quanto quer dividir: ";
		cin >> div_2;
		cal_div = div_1 / div_2;
		cal_res = div_1 % div_2;
		cout << "\n" "O resultado da divisao e: "<< cal_div;
		cout << "\n" "O resto e: " << cal_res;
		
	}else{
		cout << "Numero incorreto! digite um numero entre (1/2/3/4)";
	}
	
	return 0;
	}
