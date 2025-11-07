#include <iostream>
using namespace std;

int main(){
    cout <<"Tienes dinero? (1 para si, 0 para no): ";
    bool tiene_dinero;
    cin >> tiene_dinero;
    tiene_dinero ? cout <<"Pruede viajar a uruguay"<<'\n' : cout<< "Tendras que esperar a tener dinero"<<'\n';
    // cout << resultado << '\n';
    cout <<"Introduce un numero: ";
    int numero;
    cin>> numero;
    numero % 2 == 0 ? cout << "El numero es par " <<'\n' : cout << "El numero es impar "<< '\n';

    bool hambriento = true;
    
    hambriento ? cout << "Vamos a comer!" << '\n' : cout << "Sigamos trabajando!" << '\n';

    return 0;
}