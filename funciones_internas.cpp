#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
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
    cout<<"El maximo entre los numeros es: "<<z<<'\n';
    return 0;
}