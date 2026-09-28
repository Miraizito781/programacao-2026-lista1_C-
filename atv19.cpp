#include <iostream>
using namespace std;

int main() {
   cout << "Digite o valor do salário a ser aumentado: " << endl;
   double salario;
   cin >> salario;
   
   double acrescimo = 15.0 / 100.0;
   
   double valorFinal = salario + (acrescimo * salario);
   
   cout << "O valor do salário acrescido de 15% é de: " << valorFinal << endl;
   return 0;
}