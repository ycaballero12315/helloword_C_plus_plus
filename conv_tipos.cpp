#include <iostream>
using std::cout;
using std::cin;

double calc_porcentage(int nota, int total)
{
    return((double)nota / total) * 100;
}
int main(){
    int total;
    int nota;
    std::string student_name;
    cout<<"Nombre completo del estudiante: ";
    getline(cin>>std::ws, student_name);
    cout<<"Ingrese la nota obtenida: ";
    cin>>nota;
    cout<<"Ingrese el total de la nota: ";
    cin>>total;

    double porcentage = calc_porcentage(nota,total);
    cout<<"Porcentage de la nota total: "<<porcentage<< "% " <<"del estudiante: " <<student_name << '\n';
    return 0;
}