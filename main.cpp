#include <iostream>
#include "cola.h"

int main() {
    Cola miCola;
    std::string turno;
    std::string atendido;
    int opcion;


    do {
        std::cout <<"\n Sistema de Turnos BAC ";
        std::cout <<"\n 1. Inserte turno alfanumerico ";
        std::cout <<"\n 2. Mostrar el turno de la persona que esta siendo atendido: ";
        std::cout <<"\n 3. Mostrar el ultimo numero ingresado";
        std::cout <<"\n 4. Eliminar un turno especifico";
        std::cout <<"\n 5. Esta vacia la cola?";
        std::cout <<"\n 6. Salir";
        std::cout << "\n Seleccion alguna de las opciones anteriores";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese el turno alfanumerico: ";
            std::cin >> turno;
            miCola.insertarElem(turno);
            break;
            case 2:

                miCola.atender(atendido);
            std::cout << "Turno atendido: " << atendido << "\n";
            std::cout << "Ahora la cola tiene " << miCola.getLongitud() << " turnos.\n";
            break;

            case 3:
                std::cout << "El ultimo turno es: " << miCola.ultimoElem() << "\n";
            break;

            case 4 :
                std::cout << "Ingrese el turno alfanumerico: ";
            std::cin >> turno;
            miCola.eliminarElem(turno);
            break;

            case 5:
                if (miCola.esVaciaCola()) {
                    std::cout << "La cola esta vacia.\n";
                } else {
                    std::cout << "La cola no esta vacia.\n";
                }
            break;
            case 6:
                std::cout << "Saliendo del programa";
            break;

            default:
                std::cout << "Opcion no valida. Intente nuevamente \n";
            break;
        }
    }while (opcion !=6);

    return 0;
}
