#include "Complejo.hpp"
using namespace std;

Complejo::Complejo(double ValR, double ValI):real(ValR),imaginario(ValI){
}

void Complejo::agregar(double ValR, double ValI){
    real = real + ValR;
    imaginario = imaginario + ValI;

}

double Complejo::conjugado(){
    
}


int main(){
    Complejo();
    Complejo{2,3};
    return 0;
}

