#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
cout<<"******************************************"<<endl;
cout<<"*Bienvenido al Juego de la Adivinanza!   *"<<endl;
cout<<"* Ingrese un numero en el rango: 1 a 100 *"<<endl;
cout<<"******************************************"<<endl;

cout<< endl;
cout<< "Escoja el nivel de dificultad: "<< endl;
cout<< "Facil (F), Medio (M) o Dificil (D)"<<endl;

char dificultad;
cin >> dificultad;

int numero_tentativas;

if (dificultad == 'F'){
   numero_tentativas = 15;
}

else if (dificultad == 'M'){
   numero_tentativas = 10;
}

else if(dificultad == 'D'){
   numero_tentativas = 5;
}
else {
 cout <<"Dificultad no valida, por defecto se pondra en nivel medio"<<endl;
 numero_tentativas = 10;
}


//inicializar la semilla para generar numeros aleatorios
srand(time(0));
const int NUMERO_SECRETO = 1 + rand() %100; // Generar un numero aleatrorio entre 1 y 100
//cout<< "Numero secreto aleatorio generado entre 1 y 100: "<< NUMERO_SECRETO<<endl;

int adivina;

bool no_acerto = true;
int intentos=0;
double puntos = 1000.0; //...guarda los puntos ganados

while (no_acerto && intentos < numero_tentativas ){
    intentos ++;
    cout<< "Tentativa " << intentos<<" de"<< numero_tentativas<< endl; 
    cout<<"Cual es el numero?";
    cin>>adivina;

    double puntos_perdidos = abs(adivina - NUMERO_SECRETO)/2.0;
    puntos = puntos - puntos_perdidos;

    cout<<"El valor de su numero es: "<<adivina<<endl;

    bool acerto = adivina == NUMERO_SECRETO;
    bool mayor = adivina > NUMERO_SECRETO;

    if (acerto){
         cout<<"Felicitaciones!!! ... adivino el numero secreto"<<endl;
          no_acerto = false;
         }

    else if(mayor){
         cout<<"El numero ingresado es mayor que el numero secreto"<<endl;
         }

    else{
         cout<<"El numero ingresado es menor que el numero secreto"<<endl;
        }

    }
cout << "Finalizo el juego"<< endl;

if (!no_acerto){
   cout<< "Lograste adivinar el numero secreto en: "<< intentos << " intentos"<<endl;
}
else {
   cout<<"Supero el numero de intentos, el numero secreto era: "<<NUMERO_SECRETO<<endl;
}

cout.precision(2);
cout<<fixed;
cout<< "Su puntuacion fue de "<<puntos<<" puntos"<<endl;
}

