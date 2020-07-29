#include<iostream>
using namespace std;

int numeroInvertido(int a, int invertido);

int main() {
    double numero;
    cout << "INVERTIR UN NUMERO\n";
    cout << "Introduzca el numero: ";
    cin >>numero;
    cout << "El numero invertido es "<< numeroInvertido(numero,0);
    
    return 0;
}

    int numeroInvertido(int numero, int invertido){
        if(numero>0){
            return numeroInvertido(numero/10, numero%10+invertido*10);
        } else{
            return invertido;
        }
    }
