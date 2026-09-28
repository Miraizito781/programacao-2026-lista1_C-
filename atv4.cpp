#include <iostream>

int main (){
    double taxa_conv = 5.35;
    double valor_real = 500;
    double valor_dolar = taxa_conv * valor_real;
    std::cout << valor_dolar << std::endl;
    return 0;
}