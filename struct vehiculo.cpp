#include <iostream>
using namespace std;

//Crea una estructura llamada Vehiculo que contenga los siguientes campos: marca (string), modelo(string), anio (int). Luego, declara un arreglo de 5 vehículos.
//Escribe un programa que permita al usuario ingresar los datos de cada vehículo y luego muestre la información del vehículo más reciente.


struct Vehiculo {
    string marca;
    string modelo;
    int anio;
};

int main() {
    Vehiculo vehiculos[5];

	cout << "*** Ingresar datos de 5 vehiculos *** " << endl;
	cout << " " << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese la marca del vehiculo " << i + 1 << ": ";
        cin.ignore();
        getline(cin, vehiculos[i].marca);
        cout << "Ingrese el modelo del vehiculo " << i + 1 << ": ";
        getline(cin, vehiculos[i].modelo);
        cout << "Ingrese el anio del vehiculo " << i + 1 << ": ";
        cin >> vehiculos[i].anio;
    }

    int indiceMasReciente = 0;
    for (int i = 1; i < 5; i++) {
        if (vehiculos[i].anio > vehiculos[indiceMasReciente].anio) {
            indiceMasReciente = i;
        }
    }

    cout << "\nEl vehiculo mas reciente es:\n";
    cout << "Marca: " << vehiculos[indiceMasReciente].marca << "\n";
    cout << "Modelo: " << vehiculos[indiceMasReciente].modelo << "\n";
    cout << "Anio: " << vehiculos[indiceMasReciente].anio << "\n";

    return 0;
}
