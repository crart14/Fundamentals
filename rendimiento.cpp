#include <iostream>
#include <string>

void imprimirCopia(std::string texto){
    std::cout << texto << std::endl;
}

void imprimirReferencia(const std::string& texto){
    std::cout << texto << std::endl;
}

int main(){
    std::string mensaje = "Learning C++";
    imprimirCopia(mensaje);
    imprimirReferencia(mensaje);

    return 0;
}