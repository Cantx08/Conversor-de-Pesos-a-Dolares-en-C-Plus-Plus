#include <iostream>
using namespace std;

int main()
{
    cout << "13 Programa que convierte pesos a dolares" << endl;
    double montoEnPesos, montoEnDolares;

    // La cantidad en pesos debe ser mayor a 0.
    // Ingresar el monto en pesos que desea convertir en dólares
    cout << "Ingrese la cantidad de pesos: ";
    cin >> montoEnPesos;

    // Calcular el monto en dólares
    montoEnDolares = 0.055 * montoEnPesos;

    // Mostrar el resultado en consola.
    cout << "\nPor " << montoEnPesos << " MXN, se obtuvo " << montoEnDolares << " USD.";
    return 0;
}