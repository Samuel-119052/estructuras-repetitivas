#include <iostream>
using namespace std;

int main() {
    int edad;
    char sexo, continuar;
    float pulsaciones;

    do {
        cout << "----------------------------------------\n";
        cout << " CALCULO DE PULSACIONES POR EDAD Y SEXO\n";
        cout << "----------------------------------------\n";
        do {
            cout << "Ingrese edad (entre 1 y 120): ";
            cin >> edad;
            if (edad < 1 || edad > 120) {
                cout << "Edad no valida. Intente nuevamente.\n";
            }
        } while (edad < 1 || edad > 120);
        do {
            cout << "Ingrese sexo (M/F): ";
            cin >> sexo;
            if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
                cout << "Sexo no valido. Ingrese M o F.\n";
            }
        } while (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f');
        if (sexo == 'F' || sexo == 'f')
            pulsaciones = (220 - edad) / 10.0;
        else
            pulsaciones = (210 - edad) / 10.0;
        cout << "Pulsaciones por 10 segundos: " << pulsaciones << endl;
        cout << "Desea calcular nuevamente (s/n): ";
        cin >> continuar;
        cout << endl;
    } while (continuar == 's' || continuar == 'S');
    cout << "Gracias por usar el programa.\n";
    return 0;
}