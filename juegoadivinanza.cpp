#include <iostream>
using namespace std;
int main(){
cout<<"***************************************"<<endl;
cout<<"*Bienvenido al Juego de la Adivinanza!*"<<endl;
cout<<"***************************************"<<endl;

const int NUMERO_SECRETO = 42;
int adivina; 
cout<<"Cual es el numero?";
cin>>adivina;
cout<<"El valor de su numero es: "<<adivina<<endl;
bool acerto = adivina == NUMERO_SECRETO;
bool mayor = adivina > NUMERO_SECRETO;
if (acerto){
     cout<<"Felicitaciones!!! ... adivino el numero secreto"<<endl;
     }
else if(mayor){
    cout<<"El numero ingresado es mayor que el numero secreto"<<endl;
    }
else{
    cout<<"El numero ingresado es menor que el numero secreto"<<endl;
    }

}

