//
// Created by HP on 21/10/2024.
//
#include <string>
#include "Cola.h"

Cola::Cola() : frente(0), final(-1), longitud(0) {}

bool Cola::esVaciaCola() const {
    return longitud == 0;
}

Cola Cola::insertarElem(const std::string& elemento) {
    if (longitud < MAX_SIZE) {
        final = (final + 1) % MAX_SIZE;  // Movimiento circular del final
        datos[final] = elemento;            // Inserta el nuevo turno
        longitud++;                      // Incrementa la longitud
    }
    return *this;
}

Cola Cola::atender(std::string &elemento) {
    if (!esVaciaCola()) {
        elemento = datos[frente];            // Toma el turno del frente
        frente = (frente + 1) % MAX_SIZE; // Movimiento circular del frente
        longitud--;                       // Decrementa la longitud
    }
    return *this;
}

Cola Cola::eliminarElem(const std::string& elemento) {
    int index = frente;
    bool found = false;

    for (int i = 0; i < longitud; ++i) {
        if (datos[index] == elemento) {
            found = true;
            break;
        }
        index = (index + 1) % MAX_SIZE;
    }

    if (found) {
        while (index != final) {
            datos[index] = datos[(index + 1) % MAX_SIZE]; // Mueve los turnos hacia adelante
            index = (index + 1) % MAX_SIZE;
        }
        final = (final - 1 + MAX_SIZE) % MAX_SIZE; // Ajusta el final
        longitud--;                                // Decrementa la longitud
    }

    return *this;
}

std::string Cola::ultimoElem() const {
    if (!esVaciaCola()) {
        return datos[final]; // Retorna el último turno
    }
    return ""; // Indica que la cola está vacía
}

int Cola::getLongitud() const {
    return longitud; // Retorna la cantidad de elementos
}

void Cola::destruirCola() {
    frente = 0;
    final = -1;
    longitud = 0; // Resetea la cola
}