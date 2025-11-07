#include <iostream>
#include <ctime>
using namespace std;

int main(){
    srand(time(NULL));
    int aleatorio = rand() % 100 +1;
    int intentos;
    int num;
    do
    {
        cout << "Adivina el numero entre 1 y 100: ";
        cout << "Digame el numero para adivinar: ";
        cin >> num;
        intentos++;
        if (num < aleatorio){
            cout << "El numero es mayor->> "<< '\n';
        }
        else if (num > aleatorio){
            cout << "El numero es menor->> "<< '\n';
        }
        else {
            cout << "Felicidades! Has adivinado el numero en " << intentos << " intentos." << '\n';
        }
    } while (num != aleatorio);
    return 0;
}