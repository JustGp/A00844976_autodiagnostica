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

Complejo Complejo::conjugado(){
    return Complejo(real, -imaginario);
}


Complejo Complejo::suma(Complejo& numero){
    double x = real + numero.getReal();
    double y = imaginario + numero.getImaginario();
    return Complejo(x,y);
}

Complejo Complejo::multiplicacion(Complejo& numero){
    double C = numero.getReal();
    double D = numero.getImaginario();

    double vreal = (real*C)-(imaginario*D);
    double vimag = (real*D)+(imaginario*C);
    return Complejo(vreal,vimag);
}

Complejo Complejo::multiEscalar(double escalar){
    double x = real * escalar;
    double y = imaginario * escalar;

    return Complejo(x,y);

}

void Complejo::imprime() {
    std::cout<< "real" << real << " imaginario " << imaginario << std::endl;

}


