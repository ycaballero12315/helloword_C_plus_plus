#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cout <<"Inglese el cateto de un triangulo: ";
    cin >> a;
    cout <<"Ingrese el otr cateto del triangulo: ";
    cin >> b;
    double hipotenuza = sqrt(pow(a,2) + pow(b,2));
    cout <<"La hipotenuza del triangulo es: " << hipotenuza << '\n';
    return 0;
}