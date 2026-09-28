#include <iostream>
using namespace std;

int main() {
   cout << "Digite o valor do produto" << endl;
   double valor;
   cin >> valor;
   
   cout << "Digite a quantidade que você comprou desse produto" << endl;
   int qtd;
   cin >> qtd;
   
   double valorttl = qtd * valor;
   cout << "O valor total do produto é: " << valorttl << endl;
   
   double valorttldesc = valorttl - (valorttl / 10.0);
    cout << "O valor total do produto com desconto de 10% aplicado é: " << valorttldesc << endl;
   return 0;
}