#include <iostream>

int main (){
       int a{20};
       int b{30};
       int c{40};
       int auxiliar{0};
       
       std::cout << "Antes da troca era: " << "A: " << a << "B: " << b << "C : " << c << std::endl;
       
       auxiliar = a;
       a = b;
       b = auxiliar;
       
       std::cout << "Depois da troca é: " << "A: " << a << "B: " << b << "C : " << c << std::endl;
       return 0;
}
       