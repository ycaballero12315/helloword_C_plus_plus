#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand((time(NULL))); // Semilla para numeros aleatorios
    int numero_aleatorio = rand() % 5 + 1; // Numero aleatorio entre 1 y 6
    cout << "Numero aleatorio generado: " << numero_aleatorio << '\n';
    switch (numero_aleatorio)
    {
        case 1:
            cout << "Has sacado un uno!" << '\n';
            break;
        case 2:
            cout << "Has sacado un dos!" << '\n';
            break;
        case 3:
            cout << "Has sacado un tres!" << '\n';  
            break;
        case 4:
            cout << "Has sacado un cuatro!" << '\n';
            break;
        case 5:
            cout << "Has sacado un cinco!" << '\n';
            break;
        case 6:
            cout << "Has sacado un seis!" << '\n';
            break;
        default:
            break;
        }
    return 0;
}