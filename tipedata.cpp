#include <iostream>

int main() {
    int x = 10;
    int y = 20;
    if (x>5){
        std::cout<<x+y<<'\n';
    }
    bool c = true;
    bool k = false;
    std::cout<<(c==k)<<'\n'; //imprime 0 es false
    std::string name = "Yoeny"; //el tipo string esta dentro de std
    std::cout<<"Hello "<< name<<'\n';
    return 0;
}