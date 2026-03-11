#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n========================================" << endl;
        cout << "   REPASO DE ESTRUCTURAS DE CONTROL" << endl;
        cout << "========================================" << endl;
        cout << "1. Operador Ternario (Aprobado/Reprobado)" << endl;
        cout << "2. Ciclos For (Incremento y Regresivo)" << endl;
        cout << "3. Uso de Break y Continue" << endl;
        cout << "4. Recorrer Arreglos (Tradicional)" << endl;
        cout << "5. Ciclos Anidados (Tablas de Multiplicar)" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        
        // Validacion simple de entrada
        if (!(cin >> opcion)) {
            cout << "Error: Ingrese un numero valido." << endl;
            cin.clear(); 
            cin.ignore(1000, '\n');
            continue;
        }

        cout << "----------------------------------------\n" << endl;

        switch (opcion) {
            case 1: {
                float n1, n2, n3, promedio;
                cout << "Ingrese tres notas (ej: 70 85 90): " << endl;
                cin >> n1 >> n2 >> n3;
                promedio = (n1 + n2 + n3) / 3;
                
                // Operador ternario 
                string estado = (promedio >= 61) ? "APROBADO" : "REPROBADO";
                cout << "Promedio: " << promedio << " | Estado: " << estado << endl;
                break;
            }

            case 2: {
                // Incrementos y decrementos 
                cout << "Cuenta del 0 al 9: ";
                for (int i = 0; i < 10; i++) cout << i << " ";
                
                cout << "\nCuenta regresiva del 10 al 0: ";
                for (int i = 10; i >= 0; i--) cout << i << " ";
                cout << endl;
                break;
            }

            case 3: {
                // Control de flujo 
                cout << "Saltando el numero 5 (Continue):" << endl;
                for (int i = 0; i <= 8; i++) {
                    if (i == 5) continue;
                    cout << i << " ";
                }
                cout << "\nDeteniendo en el 5 (Break):" << endl;
                for (int i = 0; i <= 8; i++) {
                    if (i == 5) break;
                    cout << i << " ";
                }
                cout << endl;
                break;
            }

            case 4: {
                // Arreglos y Sizeof 
                int datos[] = {10, 50, 100, 200, 500};
                int tam = sizeof(datos) / sizeof(datos[0]);

                cout << "Recorriendo arreglo de " << tam << " elementos:" << endl;
                for (int i = 0; i < tam; i++) {
                    cout << "Indice [" << i << "] = " << datos[i] << endl;
                }
                break;
            }

            case 5: {
                // Ciclos anidados 
                int inicio, fin;
                cout << "Rango de tablas (ej. Inicio 2, Fin 4): " << endl;
                cout << "Inicio: "; cin >> inicio;
                cout << "Fin: "; cin >> fin;

                for (int r = inicio; r <= fin; r++) {
                    cout << "\n--- TABLA DEL " << r << " ---" << endl;
                    for (int i = 1; i <= 10; i++) {
                        cout << r << " x " << i << " = " << (r * i) << endl;
                    }
                }
                break;
            }

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 0);

    return 0;
}
