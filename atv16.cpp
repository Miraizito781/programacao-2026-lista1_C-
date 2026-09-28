#include <iostream>
using namespace std;
#include <iomanip>

int main() {
   cout << "Digite uma temperatura em celsius: " << endl;
   double tempCelsius;
   cin >> tempCelsius;
   
   double tempFahrenheit = (tempCelsius * 9 / 5) + 32;
   cout << "O valor dessa temperatura em Fahrenheit é: " << tempFahrenheit << endl;
   return 0;
}