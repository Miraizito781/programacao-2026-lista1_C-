#include <iostream>
using namespace std;
#include <iomanip>

int main() {
   cout << "Digite a primeira nota do aluno" << endl;
   double nota1;
   cin >> nota1;
   
   cout << "Digite a segunda nota do aluno" << endl;
   double nota2;
   cin >> nota2;
   
   cout << "Digite a terceira nota do aluno" << endl;
   double nota3;
   cin >> nota3;
   
   double media = (nota1 + nota2 + nota3) / 3;
   cout << "A média desse aluno é de: " << media << endl;
   return 0;
}