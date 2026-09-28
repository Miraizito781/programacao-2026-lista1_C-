#include <iostream>
using namespace std;

int main() {
   cout << "Informe a base do retângulo: " << endl;
   double baseRet;
   cin >> baseRet;
   
   cout << "Informe a altura do retângulo: " << endl;
   double altRet;
   cin >> altRet;
   
   double perimetro = 2 * (baseRet + altRet);
   double area = baseRet * altRet;
   
   cout << "O perimetro desse retângulo é de: " << perimetro << endl;
   cout << "A area desse retângulo é de: " << area << endl;
   return 0;
}