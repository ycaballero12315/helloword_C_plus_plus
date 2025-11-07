#include <iostream>
using namespace std;

string hacerPizza();
string hacerPizza(string ingrediente1, string ingrediente2);
int main(){
    cout << hacerPizza() << '\n';
    cout <<"Ingrese el infrediente 1: "<<'\n';
    string ingrediente, ingrediente2;
    getline(cin, ingrediente);
    cout <<"Ingrese el infrediente 2: "<<'\n';
    getline(cin, ingrediente2);
    cout << hacerPizza(ingrediente, ingrediente2) << '\n';
    return 0;
}
string hacerPizza(){
    return "Pizza napolitana!";
}
string hacerPizza(string ingrediente1, string ingrediente2){
    return "Pizza con " + ingrediente1 + " y " + ingrediente2 + "!";
}