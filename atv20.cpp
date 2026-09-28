#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    cout << "Digite a quantidade de segundos: ";
    int segundosTempo;
    cin >> segundosTempo;
    
    int horas = segundosTempo / 3600;
    int minutos = (segundosTempo % 3600) / 60;
    int segundos = segundosTempo % 60;
    
    cout << "O horário exato é: " 
    << setfill('0') << setw(2) << horas << ":"
    << setw(2) << minutos << ":"
    << setw(2) << segundos << endl;
   return 0;
}