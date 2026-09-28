#include <iostream>
#include <iomanip> // Biblioteca necessária para o setprecision

int main (){
       double peso{65};
       double altura{1.80};
       
         // Define o formato fixo com 2 casas decimais para tudo o que vier depois
         std::cout << std::fixed << std::setprecision(2);
         
        std::cout << "O seu peso é: " << peso << ". E sua altura é: " << altura << std::endl;
        return 0;
}