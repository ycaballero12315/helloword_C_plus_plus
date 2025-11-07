#include <iostream>
using namespace std;

int main(){
    cout <<"################################Calculadora################################" << '\n';
    cout<<"Ingrese la operacion a realizar (+, -, *, /): ";
    char op;
    cin>>op;
    cout<< "Ingrese el primer numero: ";
    float num1, num2;;
    cin>>num1;
    cout<< "Ingrese el segundo numero: ";
    cin>>num2;
    switch (op)
    {
        case '+':
            cout<< "El resultado es: " << num1 + num2 << '\n';
            break;
        case '-':
            cout<< "El resultado es: " << num1 - num2 << '\n';
            break;
        case '*':
            cout<< "El resultado es: " << num1 * num2 << '\n';
            break;
        case '/':
            if(num2 != 0){
                cout<< "El resultado es: " << num1 / num2 << '\n';
            } else {
                cout<< "Error: Division por cero no es permitida." << '\n';
            }
            break;
        default:
            cout<< "Operacion invalida" << '\n';
            break;
    }
    cout<<"################################Fin Calculadora################################" << '\n';
    return 0;
}