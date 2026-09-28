#include <iostream>

int main (){
    int horas{44};
    double pag_hora{7.37};
    double salario = horas * pag_hora;
    std::cout << salario << std::endl;
    return 0;
}