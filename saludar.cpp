#include <iostream>
using namespace std;

void saludar(string name, int age);

int main(){
    string name;
    int age;
    cout <<"Ingrese su nombre: ";
    cin >> name;
    cout << "ingrese su edad: ";
    cin >> age;
    saludar(name, age);
    return 0;
}

void saludar(string name, int age){
    cout << "Hola " << name << ", tienes " << age << " años." << '\n';
}