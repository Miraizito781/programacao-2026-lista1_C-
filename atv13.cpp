#include <iostream>
using namespace std;
#include <cmath>

int main() {
   cout << "Digite um número para calcular" << endl;
   double num;
   cin >> num;
   double quadrado_num = pow(num, 2);
   double cubo_num = pow(num, 3);
   
   cout << "O quadrado deste número é: " << quadrado_num << endl;
   cout << "O cubo deste número é: " << cubo_num << endl;
   return 0;
}