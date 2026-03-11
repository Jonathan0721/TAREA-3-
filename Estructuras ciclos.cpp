#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n========================================" << endl;
        cout << "   SISTEMA DE CONTROL C++ (COMPLETO)" << endl;
        cout << "========================================" << endl;
        cout << "1. Operador Ternario (Aprobacion)" << endl;
        cout << "2. Ciclo FOR (Tablas de Multiplicar)" << endl;
        cout << "3. Ciclo WHILE (Cuenta del 0 al 4)" << endl;
        cout << "4. Ciclo DO-WHILE (Entrada de datos s/n)" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        
        // Proteccion contra entradas que no son numeros
        if (!(cin >> opcion)) {
            cout << "\n[!] Error: Ingrese un numero valido." << endl;
            cin.clear(); 
            cin.ignore(1000, '\n');
            continue;
        }

        cout << "----------------------------------------\n" << endl;

        switch (opcion) {
            case 1: {
                float n1, n2, n3, promedio;
                cout << "Ingrese tres notas (separadas por espacio): ";
                cin >> n1 >> n2 >> n3;
                promedio = (n1 + n2 + n3) / 3;
                
                // Uso de Operador Ternario
                string estado = (promedio >= 61) ? "APROBADO" : "REPROBADO";
                cout << "Resultado: " << promedio << " -> " << estado << endl;
                break;
            }

            case 2: {
                int t;
                cout << "Que tabla desea generar?: "; cin >> t;
                cout << "--- Tabla del " << t << " ---" << endl;
                for (int i = 1; i <= 10; i++) {
                    cout << t << " x " << i << " = " << (t * i) << endl;
                }
                break;
            }

            case 3: {
                int i = 0;
                cout << "Ejecutando ciclo WHILE (hasta que i sea 5):" << endl;
                while (i < 5) {
                    cout << "Valor actual de i: " << i << endl;
                    i++; // Incremento vital para evitar ciclo infinito
                }
                break;
            }

            case 4: {
                char respuesta;
                // El DO-WHILE siempre entra al menos una vez
                do {
                    cout << "Simulando proceso de contabilidad..." << endl;
                    cout << "Desea repetir el proceso? (s/n): ";
                    cin >> respuesta;
                    // cin.ignore ayuda a limpiar el buffer despues de leer un char
                    cin.ignore(1000, '\n'); 
                } while (respuesta == 's' || respuesta == 'S');
                break;
            }

            case 0:
                cout << "Cerrando programa. ¡Exitos en tu semestre!" << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 0);

    return 0;
}
