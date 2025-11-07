#include <iostream>
#include <vector>
using namespace std;
using std::cout;

namespace firts{
    int x = 56;
};

namespace second{
    int x = 78;
};

class Persona
{
private:
    /* data */
public:
    Persona(/* args */);
    ~Persona();
    void saludar();
};

Persona::Persona(/* args */)
{
}

Persona::~Persona()
{
}
void Persona::saludar(){
    std::cout<<"Hello"<<'\n';
};
// typedef std::string string_t;
using string_t = std::string; //Recomendado usarlo asi

int main(){
    using namespace firts;
    string_t pers = "Yoeny";
    Persona p;
    p.saludar();

    int student = 20;

    student ++;
    cout<<"Tipo string: "<<pers<<'\n';
    cout<<"Variable de namespace con using: "<<x<<'\n';
    cout<<"Valiable: "<<second::x<<'\n'; //::Operador de resolucion de ambito 
    cout<<"Estudiantes: "<<student<<"\n";
    return 0;
}
