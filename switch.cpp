#include <iostream>
using namespace std;

int main(){
    cout <<"Introduce un mes del 1-12: ";
    int month;
    cin >> month;
    switch (month)
    {
        case 1:
            cout <<"Enero" << '\n';
            break;
        case 2:
            cout <<"February" << '\n';
            break;
        case 3:
            cout <<"March" << '\n';
            break;
        case 4:
            cout <<"April" << '\n';
            break;
        case 5:
            cout <<"May" << '\n';
            break;
        case 6:
            cout <<"Jun" << '\n';
            break;
        case 8:
            cout <<"Julio" << '\n';
            break;
        case 9:
            cout <<"Agoust" << '\n';
            break;
        case 10:
            cout <<"October" << '\n';
            break;
        case 11:
            cout <<"November" << '\n';
            break;
        case 12:
            cout <<"December" << '\n';
            break;
        default:
            cout <<"Mes invalido" << '\n';
            break;
    }
}