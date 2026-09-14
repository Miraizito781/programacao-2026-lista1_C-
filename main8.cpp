#include <iostream>

int main (){
        int alunos_turma{35};
        double media_turma{7.8};
        bool aprovada{true};
        
        // std::boolalpha faz o C++ exibir "true" em vez de "1"
        std::cout << std::boolalpha;
        
        std::cout << "A turma tem: " << alunos_turma << " Alunos. " << "A média de seus alunos é de: " << media_turma << ". " << "Foi aprovada? " << aprovada << std::endl;
        return 0;
}