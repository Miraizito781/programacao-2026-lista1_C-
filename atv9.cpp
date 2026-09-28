#include <iostream>

int main (){
        double veloc_luz{300000};
        double tempo_seg{200};
        double distancia = veloc_luz * tempo_seg;
        
         // 'std::fixed' força o C++ a mostrar o número completo.
        // '.precision(0)' remove as casas decimais (.000000) já que o resultado é inteiro.
        
        std::cout.precision(0);
        
        std::cout << "A distância é de: " << std::fixed << distancia << " Km" << std::endl;
        return 0;
}