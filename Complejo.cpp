#include "Complejo.hpp"
#include <iostream>
Complejo::Complejo(double ValR, double ValI):real(ValR),imaginario(ValI){
}

double Complejo::getReal() const{
    return real;

}

double Complejo::getImaginario() const{
    return imaginario;
}



void Complejo::agregar(Complejo& numero){
    real = real + numero.getReal();
    imaginario = imaginario + numero.getImaginario();

}
/*
Complejo Complejo::conjugado(Complejo valor){
    return 0;
}


Complejo Complejo::suma(Complejo numero){
    return 0;
}

Complejo Complejo::multiplicacion(Complejo numero){
    return 0;
}

Complejo Complejo::multiEscalar(double escalar){
    return 0;

}
*/
void Complejo::imprime() {
    std::cout<< "real" << real << " imaginario " << imaginario << std::endl;

}


int main(){
    Complejo();
    Complejo{2,3};
    return 0;
}

