#include <iostream>
using namespace std;
int main(){
cout<<"***************************************"<<endl;
cout<<"*Bienvenido al Juego de la Adivinanza!*"<<endl;
cout<<"***************************************"<<endl;

int numero_secreto =42;
int adivina;
cout<<"Cual es el numero?";
cin>>adivina;
cout<<"El valor de su numero es: "<<adivina<<endl;
if (adivina==numero_secreto){
     cout<<"Felicitaciones!!! ... adivino el numero secreto"<<endl;
     }
else if(adivina>numero_secreto){
    cout<<"El numero ingresado es mayor que el numero secreto"<<endl;
    }
else{
    cout<<"El numero ingresado es menor que el numero secreto"<<endl;
    }

}

