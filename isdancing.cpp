#include <iostream>
using namespace std;

int main(){
    cout <<"Introduce tu edad: ";
    int age;
    cin >> age;
    if(age >= 18 and age <=65){
        cout <<"Bienvenido al dance floor!" << '\n';
    }
    else if(age <= 0){
        cout <<"Tas metiendo cuentos, aun no haz nacido!" << '\n';
    }
    else{
        cout <<"Lo siento no pueden estrar al floor de baile!" << '\n';
    }
    return 0;
}