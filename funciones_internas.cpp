#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int numero;
    int numero2;

    vector<int> numeros = {10,20,30,40,50};
    int mayor = ranges::max(numeros);
    cout<<"El numero mayor del vector es: "<<mayor<<'\n';

    cout<<"Ingrese el primer numero: ";
    cin>>numero;
    cout<<"Ingrese el segundo numero: ";
    cin>>numero2;
    int z = std::max(numero, numero2);

    cout<<"Calculando la potencia: ";
    int potencia = pow(numero, numero2);
    cout<<"El resultado de la potencia es: "<<potencia<<"\n";

    const double pi = 3.1416;
    cout<<"El valor de pi redondeado es: "<<round(pi)<<'\n';
    cout<<"El valor redondeado hacia arriba es: "<<ceil(pi)<<'\n';
    cout<<"El valor redondeado hacia abajo es: "<<floor(pi)<<'\n';

    cout<<"El maximo entre los numeros es: "<<z<<'\n';
    return 0;
}