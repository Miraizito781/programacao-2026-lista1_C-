#include <iostream>
using namespace std;

int main() {
    cout << "Digite os dois números para calcular" << endl;
    int num1;
    int num2;
    
    cin >> num1;
    cin >> num2;
    
    int soma = num1 + num2;
    int subtracao = num1 - num2;
    int multiplicacao = num1 * num2;
    int divisao = num1 / num2;
    
    cout << "A soma desses números é: "<< soma << endl;
    cout << "A subtracao desses números é: " << subtracao << endl;
    cout << "A multiplicacao desses números é: " << multiplicacao << endl;
    cout << "A divisão desses números é: " << divisao << endl;
    return 0;
}