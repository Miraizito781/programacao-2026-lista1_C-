#include <iostream>
using namespace std;

int main() {
    cout << "Digite os dois números para calcular" << endl;
    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    int resultado = num1 % num2;
    cout << "O resto desta divisão é>: " << resultado << endl;
    return 0;
}