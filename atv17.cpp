#include <iostream>
using namespace std;
#include <iomanip>

int main() {
   cout << "Digite o dividendo da operação: " << endl;
   int dividendo;
   cin >> dividendo;
   
   cout << "Digite o divisor da operação" << endl;
   int divisor;
   cin >> divisor;
   
   int quociente = dividendo / divisor;
   int resto = dividendo % divisor;
   
   cout << "O quociente dessa divisão é: " << quociente << endl;
   cout << "O resto dessa divisão é: " << resto << endl;
   return 0;
}