//
// Created by HP on 21/10/2024.
//

#ifndef COLA_H
#define COLA_H

#include <string>

class Cola {
private:
    static const int MAX_SIZE = 100;  // Tamaño máximo de la cola
    int datos[MAX_SIZE];              // Arreglo para almacenar los elementos
    int frente;                       // Índice del frente de la cola
    int final;                        // Índice del final de la cola
    int longitud;                     // Cantidad de elementos en la cola

public:
    Cola();                          // Constructora: Construye una cola vacía
    bool esVaciaCola() const;         // Analizadora: Retorna si la cola está vacía
    Cola insertarElem(const std::string &elemento);  // Modificadora: Inserta un nuevo elemento
    Cola atender(const std::string &elemento);      // Modificadora: Extrae el primer elemento de la cola
    Cola eliminarElem(std::string posicion);  // Modificadora: Elimina un elemento por su posición
    std::string ultimoElem() const;           // Analizadora: Retorna el último elemento de la cola
    std::string getLongitud() const;          // Analizadora: Retorna la cantidad de elementos
    void destruirCola();              // Destructora: Elimina todos los elementos de la cola
};

#endif
