#include <iostream>

int main (){
    double pi{3.14159};
    double raio{5.0};
    double area = pi * (raio * raio);
    std::cout << area << std::endl;
    return 0;
}