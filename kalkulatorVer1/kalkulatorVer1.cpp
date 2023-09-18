#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int liczba1 = 2;
    int liczba2 = 4;

    int dodawanie = liczba1 + liczba2;
    int odejmowanie = liczba1 - liczba2;
    int mnozenie = liczba1 * liczba2;
    float dzielenie = (float)liczba1 / (float)liczba2;
    float potegowanie = pow(liczba1, liczba2);
    double pierwiastekliczba1 = sqrt(liczba1);
    double pierwiastekliczba2 = sqrt(liczba2);

    cout << "Dodawanie = " << dodawanie << endl;
    cout << "Odejmowanie = " << odejmowanie << endl;
    cout << "Dzielenie = " << dzielenie << endl;
    cout << "Potegowanie = " << potegowanie << endl;
    cout << "Pierwiastek liczba1 = " << pierwiastekliczba1 << endl;
    cout << "Pierwiastek liczba2 = " << pierwiastekliczba2 << endl;

    system("pouse")


}
