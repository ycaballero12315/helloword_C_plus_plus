#include <iostream>
using std::cout;

bool is_par(int number){
    return number % 2 == 0;
}
int main(){
    int num = 13;
    if(is_par(num)){
        cout<<num<<" es un numero par"<<'\n';
    }
    else{
        cout<<num<<" es un numero impar"<<'\n';
    }
    return 0;
}