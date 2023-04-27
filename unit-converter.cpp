#include <iostream>
using namespace std;

int main() {
    double tempCelsius, tempFahrenheit, km, miles;

    // Conversão de temperatura Celsius para Fahrenheit
    cout << "Digite a temperatura em Celsius: ";
    cin >> tempCelsius;
    tempFahrenheit = (tempCelsius * 9.0 / 5.0) + 32.0;
    cout << tempCelsius << " graus Celsius equivale a " << tempFahrenheit << " graus Fahrenheit." << endl;

    // Conversão de quilômetros para milhas
    cout << "Digite a distância em quilômetros: ";
    cin >> km;
    miles = km / 1.609;
    cout << km << " quilômetros equivale a " << miles << " milhas." << endl;

    return 0;
}


